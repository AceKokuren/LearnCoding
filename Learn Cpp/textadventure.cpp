#include <iostream>
#include <conio.h>

int main() {
//The intro to the adventure, a talk with the king and then choice to accept quest!
  std::cout << "     -----------------Welcome Adventurer!-----------------\n\n";
  std::cout << "You have been summoned by the King for a very important mission!\n";
  std::cout << "As you enter the King's Chamber, you hear: 'Ah Welcome Adventurer!'\n'Tell me, who do I have the plasure of meeting today?'\n";
  std::cout << "Please Enter your name: ";
  std::string name;
  std::cin >> name;
  std::cout << "\n\n'Welcome to my court, " << name << "!'\n";
  std::cout << "'We have urgent need of an adventurer like yourself, to deliver an important message to the town of Bangrey!' \n'Will you help us adventurer?'\n\n";
  std::cout << "How do you respond: \n";
  std::cout << "Enter 1: I'll do it\n";
  std::cout << "Enter 2: No thank you!\n";
  std::cout << "Enter 3: What's the reward?\n";

  int answer = 0;
  std::cin >> answer;
//A loop to compare input to valid option, will only progress when a valid input has been given
  while (answer != 1 && answer != 2 && answer != 3) {
    std::cout << "Please enter 1, 2 or 3 only!\n";
    std::cin >> answer;
  }
//Case statement for each option, 1 and 3 will progress the story, 2 will end programme
  switch (answer) {
    case 1:
    std::cout << "'Excellent! Here is the message, make haste " << name << "!'\n";
    break;
    case 2:
    std::cout << "'How unfortunate, please leave us!'\n";
    std::cout << "You return home\n THE END!\n";
    return 0;
    case 3:
    std::cout << "'You will be rewarded with 100 Gold pieces, and will always be welcome in my court!'\n";
    std::cout << "Do you accept?\n\n";
    std::cout << "Y/N ";
    std::string yn;
    std::cin >> yn;
    //Another loop to wait for a valid input
    while (yn !="Y" && yn != "N") {
      std::cout << "Please enter Y or N only!\n";
      std::cin >> yn;      
    }
    if (yn == "Y") {
      std::cout << "'Excellent! Here is the message, make haste " << name << "!'\n";
    }
    else if (yn == "N") {
      std::cout << "You return home\n THE END!\n";
      std::cin;	
	return 0;
    }
  }
  //First choice, a fork in the road
  std::cout << "\nYou make your way out of town and come to a fork in the road!\n";
  std::cout << "One leads down the main path but is likely to make you late for your deadline!\n";
  std::cout << "The other is a shortcut that will get you to Bangrey on time, but many dangers lurk down this path!\n";
  std::cout << "Do you go: \n1) Left, down the main road\n2) Right, down the shortcut\n";
  
  std::string fork;
  std::cin >> fork;
 
//Allows user to input invalid option 5 times
  for (int i  = 0; i < 5; i++) {
    //Left branch of the fork
    if (fork == "Left" || fork == "left") {
    std::cout << "You start heading down the main road!\n";
    getch();
    std::cout << "You come across an overturned cart, with an injured man kneeling over a body lying on the road!\n";
    std::cout << "Do you: \n1) Stop and help\n2) Carry on passed\n";
    int cart;
    std::cin >> cart;
    
    while (cart != 1 && cart != 2) {
      std::cout << "Please enter 1 or 2 only: ";
      std::cin >> cart;
    }
    if (cart == 1) {
      std::cout << "It's a trap!\nThe 2 men jump to their feet, dragging you off your horse!" << std::endl;
      std::cout << "One of them pulls a knife and stabs you, the other grabs all your items!\n";
      std::cout << "They both jump onto the horse and ride into the distance!" << std::endl;
      std::cout << "THE END!\n";
      getch();
    }
    else if (cart == 2) {
      std::cout << "As you spur your mount onwards, you see the two men jump up and try and grab you!\n";
      std::cout << "However, you have too much momentum and manage to leave them behind!\n";
      getch();
    }
    break;
  }
  //Right branch of the fork
   else if (fork == "Right" || fork == "right") {
    std::cout << "You go right, down the forest path!\n";
    getch();
    std::cout << "As you make your way through the woods, it becomes harder to find safe ground\n";
    std::cout << "to navgate your mount safely!\n";
    getch();
    std::cout << "After a moment, your horse stops, and you hear the trees rustle!" << std::endl;
    std::cout << "Suddenly, a panther launches itself at you!" << std::endl;
    break;
  }
  else {
    std::cout << "Please enter Left or Right only!\n";
    std::cin >> fork;
    continue; 
  }
 }
}
