#include <string>
using std::string;
#include <vector>
using std::vector;

class Profile{
    string name;
    int age;
    string city;
    string country;
    string pronouns;
    vector<string> hobbies;
public:
    Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns, vector<string> new_hobbies);
    void show_profile();
    void add_hobby(vector<string> add_hobbies);
};