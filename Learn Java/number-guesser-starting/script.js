let humanScore = 0;
let computerScore = 0;
let currentRoundNumber = 1;

// Write your code below:
const generateTarget = () => Math.floor(Math.random() * 10);
const absoluteDistance = (guess, target) => Math.abs(guess - target);

const compareGuesses = (userGuess, computerGuess, targetNumber) => {
    let userDiff = absoluteDistance(userGuess, targetNumber);
    let computerDiff = absoluteDistance(computerGuess, targetNumber);
    if (userGuess < 0 || userGuess > 10) {
        alert("Not a valid number!\nPlease enter a number from 0 to 9!");
        return false;
    }
    return userDiff <= computerDiff;
}

const updateScore = winner => winner === 'human' ? humanScore++ : computerScore++;
const advanceRound = () => currentRoundNumber++;