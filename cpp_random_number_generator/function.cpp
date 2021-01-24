#include <iostream>
#include <cstdlib>
#include <ctime>

uintmax_t random_number(uintmax_t min, uintmax_t max){
  // Not included
  uintmax_t answer;

  srand(time(NULL));
  if (min == 0 && max == 0){
    answer = rand();
  }
  else{
    unsigned int tries = 0;
    unsigned int maxtries = 50;

    answer = rand()%max;
    while (answer < min + 1 && tries < maxtries){
      answer = rand()%max;
      tries ++;
      }
    if (tries == maxtries){
      if (rand()%2 == 0){
        answer = ((max+min)/2)+(rand()%((max-min)/2));
      }
      else{
        answer = ((max+min)/2)-(rand()%((max-min)/2));
      }
    }
  }
  return answer;
}