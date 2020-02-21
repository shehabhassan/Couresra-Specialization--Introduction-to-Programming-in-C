#include <stdio.h>
#include <stdlib.h>

size_t maxSeq( int *array , size_t n );

int main (){
  int array1[] = {1,2,3,4,2};
  if (maxSeq(array1,0)){
    printf("faild on NULL\n");
    exit(EXIT_FAILURE) ;
  }
  int array7[]={-5,-4,-3};
   if (maxSeq(array7,3)!= 3){
    printf("faild on -5,-4,-3\n");
    exit(EXIT_FAILURE); 
    }
  int array2[]={-2};
  if (maxSeq(array1,5) != 4){
    printf("faild on 1,2,3,4,2\n");
    exit(EXIT_FAILURE);
  }
  int array3[]={8,8,8,9};
  if (maxSeq(array2,1)!= 1){
    printf("faild on -2\n ");
    exit(EXIT_FAILURE);
  }
  int array4[] = {12}; 
  if (maxSeq(array3,4)!= 2){
    printf("faild on 8,8,8,9\n");
    exit(EXIT_FAILURE);
  }
  int array5[] = {2,-3,5,6,8};
  if (maxSeq(array4,1)!= 1){
    printf("faild on 12\n");
    exit(EXIT_FAILURE);
  }
  int array6[] ={2,3,4,6,10,15,-1,7,8,2};
  if(maxSeq(array5,5)!= 4){
    printf("faild on 2,-3,5,6,8\n");
    exit(EXIT_FAILURE);
  }
   if (maxSeq(array6,10)!= 6){
    printf("faild on 2,3,4,6,10,15,-1,7,8,2\n");
    exit(EXIT_FAILURE);
  }
 return EXIT_SUCCESS;
}
