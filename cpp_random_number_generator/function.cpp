#include <cstdlib>
#include <ctime>

unsigned int random_number(unsigned int min, unsigned int max){
  // Not included
  unsigned int answer;
  srand(time(NULL));
  if (min == 0 && max == 0){
    answer = rand();
  }
  else{
    answer = rand()%max;
    unsigned int tries = 0;
    while (answer < min + 1 && tries < 50){
      answer = rand()%max;
      tries ++;
      }
    if (tries == 50){
      answer = (max + min) / 2;
    }
  }
  return answer;
}