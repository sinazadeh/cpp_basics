#include <iostream>
using std::cout;
using std::string;
#include "function.hpp"

int main(){
  string text = "darling";
  string shuffled_text = text_shuffle(text);
  cout << shuffled_text << "\n\n";
  string long_text = "Git (/ɡɪt/) is a distributed version-control system for tracking changes in any set of files, originally designed for coordinating work among programmers cooperating on source code during software development. Its goals include speed, data integrity, and support for distributed, non-linear workflows.";
  string shuffled_long_text = text_shuffle(long_text);
  cout << shuffled_long_text;
}