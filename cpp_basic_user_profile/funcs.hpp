#include <string>
using std::string;
#include <vector>
using std::vector;

class Profile{
    string name, city, country, pronouns;
    int age;
    vector<string> hobbies;
public:
    Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns, vector<string> new_hobbies);
    void change_name(string new_name);
    void change_age(int new_age);
    void change_location(string new_city, string new_country);
    void add_hobby(vector<string> add_hobbies);
    void change_hobbies(vector<string> new_hobbies);
    void show_profile();
};