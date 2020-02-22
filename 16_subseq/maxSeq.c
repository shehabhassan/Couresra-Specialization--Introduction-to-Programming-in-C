#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array ,size_t n)
{
  int counter = 0 ;
  int max = 0 ;
  if (n == 0){
    return 0;
  }
    for (int i=0 ; i<n ; ++i ){
      if (array[i]>array[i-1])
	{
	  counter += 1;
	}
      else{
	counter = 1;
      }
      if (counter > max){
	max = counter;
      }
    }
  return max;
}
