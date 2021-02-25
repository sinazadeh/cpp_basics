#include "funcs.hpp"

int main() {
    Profile sam("Sam Drakkila", 29, "Ankara", "Turkey", "he/him", {"listening to audiobooks and podcasts"});
    sam.add_hobby({"playing rec sports like bowling and kickball","writing a speculative fiction novel"});
    sam.add_hobby({"reading advice columns"});
    sam.show_profile();
    }