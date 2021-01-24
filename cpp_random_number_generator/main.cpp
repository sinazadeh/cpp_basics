#include <iostream>
using std::cout;
#include "function.hpp"

int main(){
  cout << "A Random Number:\n";
  uintmax_t number = random_number();
  cout << number << "\n";
  cout << "A Random Number Between 0 to 10:\n";
  number = random_number(0,10);
  cout << number << "\n";
  cout << "A Random Number Between 14 to 23:\n";
  number = random_number(14,23);
  cout << number << "\n";
  cout << "A Random Number Between 20000 to 30000:\n";
  number = random_number(20000,30000);
  cout << number << "\n";
  cout << "A Random Number Between 2000000 to 3000000:\n";
  number = random_number(2000000,3000000);
  cout << number << "\n";
  cout << "A Random Number Between 634521787 to 876345217:\n";
  number = random_number(634521787,876345217);
  cout << number;
}