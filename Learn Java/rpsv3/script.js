let output = document.getElementById('output');
let startGame = document.getElementById("start");

//Function to generate a random number between 1 and 3 then choose rock, paper or scissors.
const compGuess = () => {
  const num = Math.ceil(Math.random() * 3);
  switch (num) {
    case 1 : 
      return 'rock';
    case 2 : 
      return 'paper';
    case 3 :
      return 'scissors';
    default :
      return null;
  }
}

//Function to compare guesses, throwing an alert if an invalid entry is given
const compareGuesses = (human, computer) => {
  if (human !== 'rock' && human !== 'paper' && human !== 'scissors') {
    alert("Invalid Option, try again");
    return 0;
  }
  else if (human === computer) {
    return `You chose ${human}, computer chose ${computer}, it's a draw!`;
  }
  else if (human === 'rock' && computer === 'scissors' || human === 'paper' && computer === 'rock' || human === 'scissors' && computer === 'paper') {
    return `You chose ${human}, Computer chose ${computer}! You win!`;
  }
  else if (human === 'rock' && computer === 'paper' || human === 'paper' && computer === 'scissors' || human === 'scissors' && computer === 'rock') {
    return `You chose ${human}, Computer chose ${computer}! You lose!`;
  } 
}

//Event listener to allow rock, paper, scissors to be played in the browser
startGame.addEventListener('click', () => {
  let userGuess = prompt("Enter rock, paper or scissors");
  userGuess = userGuess.toLowerCase();
  if (!compareGuesses(userGuess, compGuess())) {
    output.innerText = "";
  }
  else {
    output.innerText = compareGuesses(userGuess, compGuess());
  }  
})