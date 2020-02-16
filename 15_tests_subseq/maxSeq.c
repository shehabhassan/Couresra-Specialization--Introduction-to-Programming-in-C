#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array , size_t n )
{
  // inisilized variable. 
  size_t max ;
  int count =0 ;
  for (int i =0; i<n ; i++){
    // check condidtion for each element inside the array. 
       if(array[i]>  array[i-1]) { count++ ;} 
       else if(array[i]<  array[i-1]) {if (count>=max) {max=count;} count=1;} 
       
  }
  return max;
}
