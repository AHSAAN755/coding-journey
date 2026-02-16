// Get team name from URL
let params = new URLSearchParams(window.location.search);
let teamName = params.get("name");

// Update title
document.getElementById("team-title").textContent = teamName + " Squad";

// Get saved data
let savedData = localStorage.getItem("auctionTeams");

if (savedData && teamName) {

    let teams = JSON.parse(savedData);

    let team = teams[teamName];

    document.getElementById("team-purse").textContent = team.purse;
    document.getElementById("team-players").textContent = team.players;

    let squadList = document.getElementById("squad-list");

    team.squad.forEach(function(player) {

        let li = document.createElement("li");
        li.textContent = player.name + " - ₹" + player.price + "cr";

        squadList.appendChild(li);
    });
}
