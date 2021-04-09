let humanScore = 0;
let computerScore = 0;
let currentRoundNumber = 1;

// Write your code below:
const generateTarget = () => {
    return Math.floor((Math.random() * 10))
}
function compareGuesses(humanGuess, compGuess, target) {
    if (humanGuess === compGuess){
        return true;
    }
    else if (Math.abs(humanGuess - target) < Math.abs(compGuess - target)) {
        return true;
    }
    else if (Math.abs(humanGuess - target) > Math.abs(compGuess - target)) {
        return false;
    }
}

function updateScore(winner) {
    if (winner === 'human') {
        humanScore++;
    }
    else if (winner === 'computer') {
        computerScore++;
    }
}

function advanceRound() {
    currentRoundNumber++;
}