#include <vector>

class Profile {
    
    int age;
    std::string name, city, country, pronoun;
    std::vector <std::string> hobbies;
  
    public:
    Profile(int new_age, std::string new_name, std::string new_city, std::string new_country, std::string new_pronoun = "They/Them");
    std::string view_profile();
    void add_hobby(std::string new_hobby);
    };