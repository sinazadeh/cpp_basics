#include <iostream>
#include <vector>
#include "function.hpp"

using namespace std;

int main(){
  vector<string> dataset = {"data1", "data2", "data3", "data4"};
  string answer = random_text(dataset);
  cout << "Random text:\n";
  cout << answer;
}