let humanScore = 0;
let computerScore = 0;
let currentRoundNumber = 1;

// Write your code below:
const generateTarget = () => Math.floor(Math.random() * 10);

const compareGuesses = (userGuess, computerGuess, targetNumber) => {
    
    let userDiff = Math.abs(userGuess - targetNumber);
    let computerDiff = Math.abs(computerGuess - targetNumber);

    console.log(`${userDiff} ${computerDiff}`)
    if (computerDiff === userDiff) {
        return true;
    }
    else if (userDiff < computerDiff) {
        return true;
    }
    else {
        return false;
    }
}

const updateScore = winner => {
    if (winner === 'human') {
        humanScore++;
    }
    else if (winner === 'computer') {
        computerScore++;
    }
}
