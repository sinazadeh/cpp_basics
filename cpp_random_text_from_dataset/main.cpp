#include <iostream>
using std::cout;
using std::string;
#include <vector>
using std::vector;
#include "function.hpp"

int main(){
  vector<string> dataset = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
  string answer = random_text(dataset);
  cout << "Random text:\n";
  cout << answer;
}