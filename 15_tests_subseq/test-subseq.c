#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(signed int *array , int n );

int main (){

  int array1[] = {1,2,3,2};
  if (maxSeq(array1,0)){
    printf("faild on 1,2,3,2 \n");
    exit(EXIT_FAILURE) ;
  }
  if (maxSeq(array1,4) != 3){
    printf("faild on 1,2,3,2\n ");
    exit(EXIT_FAILURE); 
  }
  int array2[]={8,8,8,9};
  if (maxSeq(array2,4) != 2){
    printf("faild on 8,8,8,9\n");
    exit(EXIT_FAILURE);
  }
  int array3[]={12};
  if (maxSeq(array3,1)!= 1){
    printf("faild on 12\n ");
    exit(EXIT_FAILURE);
  }
  int array4[] = {2,-3,5,6,8}; 
  if (maxSeq(array4,5) != 4){
    printf("faild on 2,-3,5,6,8\n");
    exit(EXIT_FAILURE);
  }
  int array5[] = {-15};
  if (maxSeq(array5,1) != 1){
    printf("faild on -15\n");
    exit(EXIT_FAILURE);
  }
  int array6[] ={2,4,3,6,4,10,15,-1,7,8,2};
  if(maxSeq(array6,10) != 4){
    printf("faild on 2,4,3,6,4,10,15,-1,7,8,2\n");
    exit(EXIT_FAILURE);
  }
   if (maxSeq(NULL,0)){
    printf("faild on NULL1\n");
    exit(EXIT_FAILURE);
  }
   
 return EXIT_SUCCESS;
}
