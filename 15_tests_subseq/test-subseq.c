#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array ,  int n );

int main (){

  int array1[] = {1,2,3,4,1,2,3};
  if (maxSeq(array1,7)!= 4 ){
    printf("failed maxseq \n");
    exit(EXIT_FAILURE) ;
  }
  int array2[]={8,9,80,90,150,200,250,300};
  if (maxSeq(array2,7) != 8){
    printf("the array is wrong\n");
    exit(EXIT_FAILURE);
  }
  int array3[]={1,12,5,86,9,202,250,350,400};
  if (maxSeq(array3,9)!= 4 ){
    printf("the array should not be right ");
    exit(EXIT_FAILURE);
  }
  int array4[] = {-2,-5,-8,-50,80,70,10,41}; 
  if (maxSeq(array4 , 7) != 4){
    printf("the wrong array");
    exit(EXIT_FAILURE);
  }
  return EXIT_SUCCESS;
  
}
