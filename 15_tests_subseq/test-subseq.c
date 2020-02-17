#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array ,  int n );

int main (){

  int array1[] = {0,2,3,15,1,2,3};
  if (maxSeq(array1,7)!= 4 ){
    printf("failed maxseq \n");
    exit(EXIT_FAILURE) ;
  }
  int array2[]={8,9,80,90,100,20,25,30};
  if (maxSeq(array2,8) != 5){
    printf("the array is wrong\n");
    exit(EXIT_FAILURE);
  }
  int array3[]={1,12,5,86,90,202,250,350,400};
  if (maxSeq(array3,9)!= 7){
    printf("the array should not be right ");
    exit(EXIT_FAILURE);
  }
  int array4[] = {1,5,8,50,80,150,0,41}; 
  if (maxSeq(array4,8) != 6){
    printf("the wrong array");
    exit(EXIT_FAILURE);
  }
  int array5[] = {-50,-40,-30,-10,-6,-5,-4,-3,-1};
  if (maxSeq(array5,9) != 9){
    printf("WRONG");
    exit(EXIT_FAILURE);
  }
  return EXIT_SUCCESS;
  
}
