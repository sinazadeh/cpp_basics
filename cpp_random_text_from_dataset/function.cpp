#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

string random_text(vector<string> dataset){
  string answer;
  srand(time(NULL));
  answer = dataset[rand()%dataset.size()];
  return answer;
}