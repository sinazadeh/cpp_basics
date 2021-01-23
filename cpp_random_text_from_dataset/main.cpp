#include <iostream>
#include <vector>
#include "function.hpp"

using namespace std;

int main(){
  vector<string> dataset = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
  string answer = random_text(dataset);
  cout << "Random text:\n";
  cout << answer;
}