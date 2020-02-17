#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array ,  int n );

int main (){

  int array1[] = {0,1,2,1,2,3,1,2};
  if (maxSeq(array1,8)!= 3 ){
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
  int array4[] = {0,2,3,15,1,2,3}; 
  if (maxSeq(array4,7) != 4){
    printf("the wrong array");
    exit(EXIT_FAILURE);
  }
  int array5[] = {50,40,0,1,6,7,10,15};
  if (maxSeq(array5,8) != 6){
    printf("WRONG");
    exit(EXIT_FAILURE);
  }
  int array6[] ={0,-1,-2,3,4,5,80,1,20};
  if(maxSeq(array6,9) != 4){
    printf("failure");
    exit(EXIT_FAILURE);
  }
  int array7[]={0,2,5,8,0,4,5,6,7,0};
  if (maxSeq(array7,10) != 5){
  printf("done");
  exit(EXIT_FAILURE);
}
  int array8[] = {4,8,12,4,-5};
  if (maxSeq(array8,5) != 3){
    printf("false1");
    exit(EXIT_FAILURE);
  }
  int array9[] ={-2,-1,0,5,801,863,986};
  if (maxSeq(array9,7)!= 5){
    printf("false2");
    exit(EXIT_FAILURE);
  }
  int array10[] ={1,-2,5,10,100,1000,10000,100,10,0};
  if (maxSeq(array10,10)!= 5){
    printf("false3");
    exit(EXIT_FAILURE);
  }
  int array11[]={10000,1000,100,10,0,100,1000,10000};
  if(maxSeq(array11,8) != 4){
    printf("correct is not here ");
    exit(EXIT_FAILURE);
  }
  
return EXIT_SUCCESS;
  
}
