#include <stdio.h>
#include <stdlib.h>

size_t maxseq(int *array, int n){

  // check the number n is not equal 0. 
  if (n ==0){
    return 0;
  }
   
  int max=1;
  int counter=1;

  for (int i=0; i<n ;i++){
    // check the element is large the last one. and increment the seq.  
    if (array[i] > array[i-1]){
      counter++;
      }
    else {
      counter =1;
    }
    if (counter > max){
      max = counter ;
    } 
return max
}
