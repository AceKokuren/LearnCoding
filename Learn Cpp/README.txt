My big brain for C++
All notes and issues will be added here

To name a file when compiling, use the -o variable 
"g++ hello.cpp -o hello" (Creates hello.exe)

To declare a string variable, prefix with "std::string"

To get black user input use:
"std::cin.ignore()" (e.g get user to press enter before progressing)

Variables: 
int - Handles whole numbers
double - Handles floating point numbers, (decimals)
char - Handles individual letters/characters
string - Handles sequence of characters
bool - True or Fals values

To get a full sentence from an input, use:
"getline (cin, <variable_name>)"

For if statements, use these operators:
== equal to
!= not equal to
> greater than
< less than
>= greater than or equal to
<= less than or equal to

Additional operators for if statements:
&& and, both statements must be true
|| or, either statement can be true
! not, true==false and false==true

Add <ctime> library to create random seed generator with <srand(time(NULL))
To get a random output, use:
"std::rand()"
add a % aand number depending on how many options there are to choose from

Declare a vector:
Use library vector:
#include <vector>
std::vector <data_type> <<vector_name>> = {<stored_values>}
Use .push_back(); to add data to the vecor, (ensure data is the correct type for the vector).
When using a char vector, use '' as opposed to "" - Used for strings.

To convert int to string use:
"std::string <string_variable> = std::to_string(<int variable>);"

Syntax for creating a class:
"class <Class_Name> {};"
Semi colon is needed after closed curly brace.

By default, everything in a class is private, which means variables are unchangeable.
To create editable variables, preceed them with:
"Public: "
To make variables unchangeable again, simply use:
"Private: "

Constructors are useful to set up an object to have a specific set of information, so any object of a class will be the same.
To create a Constructor, in the .hpp file:
"Class_Name(int new_num);"
In the Class.cpp file:
"Class_Name::Class_Name(int new_num) 
: num(new_num) {}"
Here, this changes the variable num to the value of new_num.
This now allows an int argument to be passed in the Object of this class, (a class can have as many variables as required).
Declare a Class method in the Class.hpp file then define it in the Class.cpp file by using:
"<function_type> Class_Name::<function_name>() {}"