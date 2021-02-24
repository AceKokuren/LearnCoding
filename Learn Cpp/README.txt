My big brain for C++
All notes and issues will be added here

To name a file when compiling, use the -o variable 
"g++ hello.cpp -o hello" (Creates hello.exe)

To declare a string variable, prefix with "std::string"

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
