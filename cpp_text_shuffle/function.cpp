#include <iostream>
using std::string;
using std::cout;
#include <cstdlib>
#include <ctime>

string text_shuffle(string text){
  srand(time(NULL));
  for (int i=0; i<10; i++){
    unsigned int random_index = rand()%text.size();
    text.push_back(text[random_index]);
    text.erase(random_index, 1);
  }
  return text;
}