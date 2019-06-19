#include <stdio.h>
#include <stdlib.h>

//this program to calculate your retirement
//struct the type of variable
struct _retire_info {
  int     month;
  double contribution;
  double rate_of_return ;
};
typedef struct _retire_info retire_info ;

//first function for calcluting  
void retirement (int starAge , double initial , retire_info work , retire_info retired ){
  //variable definition
   int age = starAge;
   int months= age%12;
   double balance =initial;
  //first loop for working
   for(int i=0; i<work.month; i++)
   {
     printf("Age %3d month %2d you have $%.2f\n" ,age,months,balance);
     months = months+1;
     if (months==12){
       age =age+1;
       months=0;}
     balance = balance *(work.rate_of_return) + (work.contribution)+balance ;
   }
  //second loop for retired
   for(int j=0 ; j<retired.month ;j++)
   {
     printf("Age %3d month %2d you have $%.2f\n",age,months , balance);
     months=months+1;
     if(months==12)
     {
       age = age+1;
       months=0;
     }
     balance = balance*(retired.rate_of_return) - (retired.contribution)+balance ;
   }
  
}
int main  ()
{
  //fixed starting data
  int age =327/12;
  double balance =21345.0;
  retire_info work ,retired ;
  // this given for work 
  work.month = 489;
  work.contribution = 1000;
  work.rate_of_return = 0.045/12 ;
  //this given for retired
  retired.month = 384 ;
  retired.contribution = -4000;
  retired.rate_of_return= 0.01/12;
  //call function and running
  retirement(age,balance,work,retired);
  return EXIT_SUCCESS ; 
}
