const getUserChoice = userInput => {
  userInput = userInput.toLowerCase();

  switch (userInput) {
    case 'rock' :
     return userInput;
    case 'paper' :
     return userInput;
    case 'scissors' :
     return userInput;
    default :
     console.log('Invalid input! Please enter rock, paper or scissors only.');
    break;
  }
};

const getComputerChoice = () => {
  const computerChoice = Math.floor(Math.random() * 3);

  switch (computerChoice) {
    case 0 :
      return 'rock';
    case 1 : 
      return 'paper';
    case 2 : 
      return 'scissors';
  }
};

function determineWinner(userChoice, computerChoice) {
  if (userChoice === computerChoice) {
    console.log(`You threw ${userChoice}, Computer threw ${computerChoice}! It\'s a tie`);
  }
  if (userChoice === 'rock' && computerChoice === 'scissors' || userChoice === 'paper' && computerChoice === 'rock' || userChoice === 'scissors' && computerChoice === 'paper') {
    console.log(`You threw ${userChoice}, Computer threw ${computerChoice}! You win!`);
  }
  if (userChoice === 'rock' && computerChoice === 'paper' || userChoice === 'paper' && computerChoice === 'scissors' || userChoice === 'scissors' && computerChoice === 'rock') {
    console.log(`You threw ${userChoice}, Computer threw ${computerChoice}! You lose!`);
  } 
};

determineWinner(getUserChoice('paper'), getComputerChoice());