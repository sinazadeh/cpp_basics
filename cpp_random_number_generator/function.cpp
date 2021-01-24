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
    unsigned int maxtries = 50;
    while (answer < min + 1 && tries < maxtries){
      answer = rand()%max;
      tries ++;
      }
    if (tries == maxtries){
      answer = ((max+min)/2)+(rand()%((max-min)/2));
    }
  }
  return answer;
}