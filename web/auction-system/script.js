// ------------------- DOM REFERENCES -------------------

const currentBidElement = document.getElementById("current-bid");
const leadingTeamElement = document.getElementById("leading-team");
const playerNameElement = document.getElementById("player-name");
const startAuctionButton = document.getElementById("start-auction-btn");
const playerInput = document.getElementById("player-input");

const teamABidButton = document.getElementById("team-a-bid");
const teamBBidButton = document.getElementById("team-b-bid");
const teamCBidButton = document.getElementById("team-c-bid");
const teamAOutButton = document.getElementById("team-a-out");
const teamBOutButton = document.getElementById("team-b-out");
const teamCOutButton = document.getElementById("team-c-out");

// ------------------- VARIABLES -------------------

let currentBid = 2;
let leadingTeam = null;

let teamStatus = {
    "Team A": true,
    "Team B": true,
    "Team C": true
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
    teamStatus = {
        "Team A": true,
        "Team B": true,
        "Team C": true
    };

    teamABidButton.disabled = false;
    teamBBidButton.disabled = false;
    teamCBidButton.disabled = false;
    teamAOutButton.disabled = false;
    teamBOutButton.disabled = false;
    teamCOutButton.disabled = false;

    playerInput.value = "";
});

// ------------------- PLACE BID -------------------

function placeBid(teamName) {

    if (!teamStatus[teamName]) {
        return;
    }

    if (leadingTeam === teamName) {
        alert("You cannot bid twice in a row!");
        return;
    }

    currentBid = currentBid + 1;
    leadingTeam = teamName;

    currentBidElement.textContent = currentBid;
    leadingTeamElement.textContent = teamName;
}

// ------------------- TEAM OUT -------------------

function teamOut(teamName, bidButton, outButton) {

    teamStatus[teamName] = false;

    bidButton.disabled = true;
    outButton.disabled = true;

    checkWinner();
}

// ------------------- CHECK WINNER -------------------

function checkWinner() {

    let activeTeams = 0;
    let lastActiveTeam = null;

    for (let team in teamStatus) {
        if (teamStatus[team]) {
            activeTeams++;
            lastActiveTeam = team;
        }
    }

    if (activeTeams === 1 && lastActiveTeam !== null) {
        leadingTeam = lastActiveTeam;
        leadingTeamElement.textContent = lastActiveTeam;
        alert(lastActiveTeam + " wins the player!");
    }
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
