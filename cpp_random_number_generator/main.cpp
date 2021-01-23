#include <iostream>
#include "function.hpp"

using namespace std;

int main(){
  cout << "A Random Number:\n";
  unsigned short int number = random_number();
  cout << number << "\n";
  cout << "A Random Number Between 0 to 10:\n";
  number = random_number(0,10);
  cout << number << "\n";
  cout << "A Random Number Between 14 to 23:\n";
  number = random_number(14,23);
  cout << number << "\n";
  cout << "A Random Number Between 20000 to 30000:\n";
  number = random_number(20000,30000);
  cout << number;
}