#include<stdio.h>

int main()
{
/*Brenda Njire
computer science
kirinyaga university
s_i=principle*rate/100*time
*/
float principle,rate,time,interest;
printf("Enter principle:\n");//prompt the user to enter principal
scanf("%f",&principle);
printf("Enter rate:\n"); 
scanf("%f",&rate);
printf("Enter time:\n");
scanf("%f",&time);
//compute interest
interest=principle*rate/100*time;
//display interest
printf("interest in ksh %2f\n");



    return 0;
}