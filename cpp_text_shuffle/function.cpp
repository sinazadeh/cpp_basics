#include <string>
using std::string;
#include <cstdlib>
#include <ctime>

string text_shuffle(string text){
  srand(time(NULL));
  for (uintmax_t i=0; i<(text.size()/2)+1; i++){
    uintmax_t random_index = rand()%text.size();
    text.push_back(text[random_index]);
    text.erase(random_index, 1);
  }
  return text;
}