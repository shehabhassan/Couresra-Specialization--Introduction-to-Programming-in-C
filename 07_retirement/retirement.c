#include <stdio.h>
#include <stdlib.h>

//this program to calculate your retirement
//struct the type of variable
struct _retire_info {
  int     months;
  double contribution;
  double rate_of_return ;
};
typedef struct _retire_info retire_info ;

//first function for calcluting  
void retirement (int startAge , double initial , retire_info working , retire_info retired ){
  //variable definition
   int age = startAge;
   int months= age%12;
   double balance =initial;
  //first loop for working
   for(int i=0; i<working.months; i++)
   {
     printf("Age %3d month %2d you have $%.2f\n" ,age,months,balance);
    balance = balance +( balance * working.rate_of_return) + working.contribution ;
     months = months+1;
     if (months==12){
       age =age+1;
       months=0;}
   }
  //second loop for retired
   for(int j=0 ; j<retired.months ;j++)
   {
     printf("Age %3d month %2d you have $%.2f\n",age,months , balance);
  balance = balance +(balance*retired.rate_of_return) + retired.contribution ; 
     months=months+1;
     if(months==12)
     {
       age = age+1;
       months=0;
     }
   }
}
int main  ()
{
  //fixed starting data
  int age =327/12;
  double balance =21345.0;
  retire_info working ,retired ;
  // this given for work 
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045/12 ;
  //this given for retired
  retired.months = 384 ;
  retired.contribution = -4000;
  retired.rate_of_return= 0.01/12;
  //call function and running
  retirement(age,balance,working,retired);
  return EXIT_SUCCESS ; 
}
