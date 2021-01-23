#include <cstdlib>
#include <ctime>

using namespace std;

unsigned short int random_number(unsigned short int min, unsigned short int max){
  // Not included
  unsigned short int answer;
  srand(time(NULL));
  if (min == 0 && max == 0){
    answer = rand();
  }
  else{
    answer = rand()%max;
    while (answer < min + 1){
      answer = rand()%max;}
  }
  return answer;
}