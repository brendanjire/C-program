#include<stdio.h>

int main()
{
int age;
int income;
//prompt user to enter their age
printf("Enter your age:\n");
scanf("%d",&age);
//prompt user to enter their income
printf("Enter your income:\n");
scanf("%d",&income);
//check eligibility
if(age>=21&&income>=21000){
printf("Congratulations you qualify for a loan");
}else{
printf("Unfortunately we are unable to offer you a loan at this time");
}
    return 0;
}