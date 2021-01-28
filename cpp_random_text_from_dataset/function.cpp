#include <string>
using std::string;
#include <vector>
using std::vector;
#include <cstdlib>
#include <ctime>

string random_text(vector<string> dataset){
  string answer;
  srand(time(NULL));
  answer = dataset[rand()%dataset.size()];
  return answer;
}