#include <iostream>
#include <string>
using std::string;
using std::cout;
#include <vector>
using std::vector;
#include "funcs.hpp"


Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns, vector<string> new_hobbies){
    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    pronouns = new_pronouns;
    hobbies = new_hobbies;
}
void Profile::show_profile(){
    string hobbies_text;
    cout << "USER PROFILE:\n" << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Location: " << city << ", " << country << "\n";
    cout << "Hobbies: ";
    for (int i=0; i<hobbies.size(); i++){
        hobbies_text +=  hobbies[i] + ", ";
    }
    hobbies_text.erase (hobbies_text.end()-2, hobbies_text.end()); 
    cout << hobbies_text;
}
void Profile::add_hobby(vector<string> add_hobbies){
    for (int i=0; i<add_hobbies.size(); i++){
        hobbies.push_back(add_hobbies[i]);
    }
}