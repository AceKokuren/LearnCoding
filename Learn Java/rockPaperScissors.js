const getUserChoice = userInput => {
    userInput = userInput.toLowerCase();
    if (userInput === 'rock' || userInput === 'paper' || userInput === 'scissors') {
    return userInput;
    }
    else {
      console.log('Invalid Entry!');
    }
   }
   
   function getComputerChoice() {
     const randomNum = Math.floor(Math.random() * 3);
     switch (randomNum) {
       case 0:
        return 'rock';
       case 1:
        return 'paper';
       case 2: 
        return 'scissors';     
     }
   }
   
   function isWinner(userChoice, computerChoice) {
     if (userChoice === computerChoice) {
       return 'It\'s a tie!';
     }
     else if (userChoice === 'rock') {
       if (computerChoice === 'scissors') {
         return 'Rock crushes scissors, you win!';
       }
       else {
         return 'Paper covers rock, you lose!';
       }
     }
     else if (userChoice === 'paper') {
       if (computerChoice === 'rock') {
         return 'Paper covers rock, you win!';
       }
       else {
         return 'Scissors cuts paper, you lose!';
       }
     }
     else if (userChoice === 'scissors') {
       if (computerChoice === 'paper') {
         return 'Scissors cuts paper, you win!';
       }
       else {
         return 'Rock crushes scissors, you lose';
       }
     }
   }
   
   function playGame() {
        const userChoice = getUserChoice('ROCK');
        const computerChoice = getComputerChoice();
        console.log('You threw ' + userChoice);
        console.log('Computer threw ' + computerChoice);
        console.log(isWinner(userChoice, computerChoice));
      }
playGame();