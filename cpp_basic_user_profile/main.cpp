#include "funcs.hpp"

int main() {
    // Create a User Profile
    Profile sam("Sam Drakila", 29, "Ankara", "Turkey", "He", {"listening to audiobooks"});
    // Show Profile
    sam.show_profile();
    // Change Profile
    sam.change_name("Samuel Drakkila");
    sam.change_age(28);
    sam.change_location("Berlin", "Germany");
    sam.change_hobbies({"reading advice columns"});
    // Add Hobbies
    sam.add_hobby({"playing rec sports like bowling and kickball","writing a speculative fiction novel"});
    // Show Profile
    sam.show_profile();
    }