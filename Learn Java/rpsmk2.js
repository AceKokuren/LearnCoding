const userChoice = userInput => {
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
  }
  
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
  
  const determineWinner = (userChoice, computerChoice) => {
    if (userChoice === computerChoice) {
      return `You threw ${userChoice} and the computer threw ${computerChoice}. Its a tie!`;
    }
    if (userChoice === 'rock' && computerChoice === 'scissors' || userChoice === 'paper' && computerChoice === 'rock' || userChoice === 'scissors' && computerChoice === 'paper') {
      return `You threw ${userChoice}, computer threw ${computerChoice}. You win!`;
    }
  };
  
  console.log(determineWinner(userChoice('rock'), getComputerChoice));
  
  
  
  
  
  
  
  
  
  
  
  
  
  