//Quiz to sort you into a house from Harry Potter
//Decide whether to remove the value outputs

/*#include <iostream>

int main() {
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1, answer2, answer3, answer4;

  std::cout << "\nThe sorting hat quiz!\n";
  std::cout << "\nThe questions will be multiple choice.\nPlease enter the number of your answer and press ENTER!\n";
  std::cout << "\nQ1) When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n\n";

  std::cin >> answer1;

  if (answer1 == 1) {
    gryffindor++;
    std::cout << "\nPoints in Gryffindor: " << gryffindor << "\n";
    std::cout << "Points in Hufflepuff: " << hufflepuff << "\n";
    std::cout << "Points in Ravenclaw:  " << ravenclaw << "\n";
    std::cout << "Points in Slytherin:  " << slytherin << "\n\n";  
  }  
  else if (answer1 == 2) {
    hufflepuff++;
    std::cout << "\nPoints in Gryffindor: " << gryffindor << "\n";
    std::cout << "Points in Hufflepuff: " << hufflepuff << "\n";
    std::cout << "Points in Ravenclaw:  " << ravenclaw << "\n";
    std::cout << "Points in Slytherin:  " << slytherin << "\n\n"; 
  }
  else if (answer1 == 3) {
    ravenclaw++;
    std::cout << "\nPoints in Gryffindor: " << gryffindor << "\n";
    std::cout << "Points in Hufflepuff: " << hufflepuff << "\n";
    std::cout << "Points in Ravenclaw:  " << ravenclaw << "\n";
    std::cout << "Points in Slytherin:  " << slytherin << "\n\n";  
  }
  else if (answer1 == 4) {
    slytherin++;
    std::cout << "\nPoints in Gryffindor: " << gryffindor << "\n";
    std::cout << "Points in Hufflepuff: " << hufflepuff << "\n";
    std::cout << "Points in Ravenclaw:  " << ravenclaw << "\n";
    std::cout << "Points in Slytherin:  " << slytherin << "\n\n";  
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n2)Dusk\n";
  std::cin >> answer2;

  if (answer2 == 1) {
    gryffindor++;
    ravenclaw++;
    std::cout << "\nPoints in Gryffindor: " << gryffindor << "\n";
    std::cout << "Points in Hufflepuff: " << hufflepuff << "\n";
    std::cout << "Points in Ravenclaw:  " << ravenclaw << "\n";
    std::cout << "Points in Slytherin:  " << slytherin << "\n\n";  
  }  
  else if (answer2 == 2) {
    hufflepuff++;
    slytherin++;
    std::cout << "\nPoints in Gryffindor: " << gryffindor << "\n";
    std::cout << "Points in Hufflepuff: " << hufflepuff << "\n";
    std::cout << "Points in Ravenclaw:  " << ravenclaw << "\n";
    std::cout << "Points in Slytherin:  " << slytherin << "\n\n";
  }
  else {
    std::cout << "Invalid input!\n";
  }

  int max = 0;
  std::string house;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }
  std::cout << "You have been sorted into " << house << "\n\n";
} */

#include <iostream>

int main() {
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1, answer2, answer3, answer4;

  std::cout << "\nThe sorting hat quiz!\n";
  std::cout << "\nThe questions will be multiple choice.\nPlease enter the number of your answer and press ENTER!\n";
  std::cout << "\nQ1) When I'm dead, I want people to remember me as:\n";
  std::cout << "\n1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n\n";

  std::cin >> answer1;

  if (answer1 == 1) {
    gryffindor++;
  }  
  else if (answer1 == 2) {
    hufflepuff++;
  }
  else if (answer1 == 3) {
    ravenclaw++;
  }
  else if (answer1 == 4) {
    slytherin++;
  }
  else {
    std::cout << "Invalid input\n";
  }

  std::cout << "\nQ2) Dawn or Dusk?\n";
  std::cout << "\n1) Dawn\n2) Dusk\n\n";
  std::cin >> answer2;

  if (answer2 == 1) {
    gryffindor++;
    ravenclaw++;
  }  
  else if (answer2 == 2) {
    hufflepuff++;
    slytherin++;
  }
  else {
    std::cout << "Invalid input!\n";
  }

  std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n";
  std::cout << "\n1) The Violin\n2) The Trumpet\n3) The Piano\n4) The Drum\n\n";
  std::cin >> answer3;
  
  if (answer3 == 1) {
    slytherin++;
  }
  else if (answer3 == 2) {
    hufflepuff++;
  }
  else if (answer3 == 3) {
    ravenclaw++;
  }
  else if (answer4 == 4) {
    gryffindor++;
  }
  else {
    std::cout << "\nInvalid Input!";
  }

  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "1) The wide, sunny frassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n\n";
  std::cin >> answer4;

  if (answer4 == 1) {
    hufflepuff++;
  }
  else if (answer4 == 2) {
    slytherin++;
  }
  else if (answer4 == 3) {
    gryffindor ++;
  }
  else if (answer4 == 4) {
    ravenclaw++;
  }


  int max = 0;
  std::string house;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }
  std::cout << "You have been sorted into " << house << "\n\n";
}