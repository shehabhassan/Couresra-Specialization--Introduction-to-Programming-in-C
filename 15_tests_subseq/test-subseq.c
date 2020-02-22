#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int *array, int n);

int main (){
 
  int array1[] = {1,2,3,2};
  int array2[] = {-4};
  int array3[] = {15};
  int array4[] = {-4,-5,-6};
  int array5[] = {2,-3,5,6,8};
  int array6[] = {4,4,4,5};

  if(maxSeq(array1,0) != 0)
  {
    printf("faild on NULL\n");
    exit(EXIT_FAILURE); 
  }
 if(maxSeq(array1,3) != 3)
   {
   printf("faild on 1,2,3,2\n");
   exit(EXIT_FAILURE); 
   }
  if(maxSeq(array2,1) != 1)
    {
      printf("faild on -4\n");
      exit(EXIT_FAILURE); 
    }
  if(maxSeq(array3,1) != 1)
    {
    printf("faild on 15\n");
    exit(EXIT_FAILURE); 
    }
  if(maxSeq(array4,3) != 3)
    {
     printf("faild on -4,-5,-6\n");
     exit(EXIT_FAILURE); 
    }
  if(maxSeq(array5,5) != 4)
    {
    printf("faild on 2,-3,5,6,8\n");
    exit(EXIT_FAILURE); 
     } 
  if(maxSeq(array6,4) != 2)
   {
    printf("faild on NULL\n");
    exit(EXIT_FAILURE); 
   }
   return EXIT_SUCCESS;
}
