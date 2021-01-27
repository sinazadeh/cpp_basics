#include <iostream>
using std::cout;
using std::string;
#include "function.hpp"

int main(){
  string text = "darling";
  string shuffled_text = text_shuffle(text);
  cout << shuffled_text;
}