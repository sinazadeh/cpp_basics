#include <vector>
using std::vector;
#include "function.hpp"
using std::cout;
using std::string;

int main(){
  vector<string> dataset = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
  string answer = random_text(dataset);
  cout << "Random text:\n";
  cout << answer;
}