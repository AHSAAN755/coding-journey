// ------------------- DOM REFERENCES -------------------

const currentBidElement = document.getElementById("current-bid");
const leadingTeamElement = document.getElementById("leading-team");
const playerNameElement = document.getElementById("player-name");
const startAuctionButton = document.getElementById("start-auction-btn");
const resetAuctionButton = document.getElementById("reset-auction-btn");
const playerInput = document.getElementById("player-input");

const teamABidButton = document.getElementById("team-a-bid");
const teamBBidButton = document.getElementById("team-b-bid");
const teamCBidButton = document.getElementById("team-c-bid");
const teamAOutButton = document.getElementById("team-a-out");
const teamBOutButton = document.getElementById("team-b-out");
const teamCOutButton = document.getElementById("team-c-out");


const timerElement = document.getElementById("timer");
// ------------------- VARIABLES -------------------

let currentBid = 2;
let leadingTeam = null;

let timer = 60;
let timerInterval = null;

let teams = {
    "Team A": { purse: 120, players: 0, active: true, squad: [] },
    "Team B": { purse: 120, players: 0, active: true, squad: [] },
    "Team C": { purse: 120, players: 0, active: true, squad: [] }
};

// ------------------- START AUCTION -------------------

startAuctionButton.addEventListener("click", function () {

    let playerName = playerInput.value.trim();

    if (playerName === "") {
        alert("Please enter a player name!");
        return;
    }

    // Update player name
    playerNameElement.textContent = playerName;

    // Reset auction values
    currentBid = 2;
    leadingTeam = null;

    currentBidElement.textContent = currentBid;
    leadingTeamElement.textContent = "None";

    // Reset teams
    for (let team in teams) {
    teams[team].active = true;
}

    teamABidButton.disabled = false;
    teamBBidButton.disabled = false;
    teamCBidButton.disabled = false;
    teamAOutButton.disabled = false;
    teamBOutButton.disabled = false;
    teamCOutButton.disabled = false;

    playerInput.value = "";
    startTimer();
});

// ------------------- PLACE BID -------------------

function placeBid(teamName) {

    if (!teams[teamName].active) {
        return;
    }

    if (leadingTeam === teamName) {
        alert("You cannot bid twice in a row!");
        return;
    }

    if (teams[teamName].purse < currentBid + 1) {
        alert(teamName + " does not have enough purse!");
        return;
    }

    currentBid = currentBid + 1;
    leadingTeam = teamName;

    currentBidElement.textContent = currentBid;
    leadingTeamElement.textContent = teamName;
    autoEliminateTeams();
    startTimer();
}

function startTimer() {
    timer = 60;
    timerElement.textContent = timer;
    clearInterval(timerInterval);
    timerInterval = setInterval(function () {
        timer--;
        timerElement.textContent = timer;
        if (timer === 0) {
            clearInterval(timerInterval);
            declareWinner();
        }
    }, 1000);
}
// ------------------- TEAM OUT -------------------

function teamOut(teamName, bidButton, outButton) {

    teams[teamName].active = false;

    bidButton.disabled = true;
    outButton.disabled = true;

    checkWinner();
}

// ------------------- CHECK WINNER -------------------

function checkWinner() {

    let activeTeams = 0;
    let lastActiveTeam = null;

    for (let team in teams) {
        if (teams[team].active) {
            activeTeams++;
            lastActiveTeam = team;
        }
    }

    if (activeTeams === 1 && lastActiveTeam !== null) {
        clearInterval(timerInterval);
        leadingTeam = lastActiveTeam;
        leadingTeamElement.textContent = lastActiveTeam;
        alert(lastActiveTeam + " wins the player!");
        completePurchase();
    }
}

function autoEliminateTeams() {

    let nextBidAmount = currentBid + 1;

    for (let team in teams) {

        if (
            teams[team].active &&
            teams[team].purse < nextBidAmount
        ) {

            teams[team].active = false;

            // Disable that team’s buttons
            let formattedName = team.toLowerCase().replace(" ", "-");

            document.getElementById(formattedName + "-bid").disabled = true;
            document.getElementById(formattedName + "-out").disabled = true;

            console.log(team + " auto eliminated (insufficient purse)");
        }
    }

    checkWinner(); // check if only one remains
}

function declareWinner() {
    if (leadingTeam === null) {
        alert("no bids placed!");
        return;
    }
    alert(leadingTeam + " buys the player!");
    completePurchase();
}

function completePurchase(){
    if(!leadingTeam)return;
    clearInterval(timerInterval);
    teams[leadingTeam].purse -=currentBid;
    teams[leadingTeam].players += 1;

    // Add player to squad
    teams[leadingTeam].squad.push({
        name: playerNameElement.textContent,
        price: currentBid
    });
    
    updateTeamUI(leadingTeam);
    saveData();
}

function updateTeamUI(teamName){

    let formattedName = teamName.toLowerCase().replace(" ", "-");

    let purseElement = document.getElementById(formattedName + "-purse");
    let playersElement = document.getElementById(formattedName + "-players");

    purseElement.textContent = teams[teamName].purse;
    playersElement.textContent = teams[teamName].players;
}

function saveData(){
    localStorage.setItem("auctionTeams",JSON.stringify(teams));
}

function resetAuctionData() {

    // Reset teams object to default
    teams = {
        "Team A": { purse: 120, players: 0, active: true },
        "Team B": { purse: 120, players: 0, active: true },
        "Team C": { purse: 120, players: 0, active: true }
    };

    // Remove saved data from browser
    localStorage.removeItem("auctionTeams");

    // Update UI
    for (let team in teams) {
        updateTeamUI(team);
    }

    alert("Auction has been reset!");
}

// ------------------- EVENT LISTENERS -------------------

teamABidButton.addEventListener("click", function () {
    placeBid("Team A");
});

teamBBidButton.addEventListener("click", function () {
    placeBid("Team B");
});

teamCBidButton.addEventListener("click", function () {
    placeBid("Team C");
});

teamAOutButton.addEventListener("click", function () {
    teamOut("Team A", teamABidButton, teamAOutButton);
});

teamBOutButton.addEventListener("click", function () {
    teamOut("Team B", teamBBidButton, teamBOutButton);
});

teamCOutButton.addEventListener("click", function () {
    teamOut("Team C", teamCBidButton, teamCOutButton);
});

resetAuctionButton.addEventListener("click", function () {
    resetAuctionData();
});


window.addEventListener("load", function () {

    let savedData = localStorage.getItem("auctionTeams");

    if (savedData) {

        teams = JSON.parse(savedData);

        // Update UI for all teams
        for (let team in teams) {
            updateTeamUI(team);
        }
    }
});
