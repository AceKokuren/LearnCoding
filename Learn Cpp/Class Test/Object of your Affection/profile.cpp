#include <iostream>
#include "profile.hpp"

Profile::Profile(int new_age, std::string new_name, std::string new_city, std::string new_country, std::string new_pronoun)
    : age(new_age), name(new_name), city(new_city), country(new_country), pronoun(new_pronoun) {
    }