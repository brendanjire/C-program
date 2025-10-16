#include<stdio.h>

int main()
{
/*Brenda Njire
computer science
kirinyaga university
CT101/G/26465/25
Exam eligibility
*/
int attendance,average_marks;
printf("Enter your attendance:\n");//attendance is in percentage
scanf("%d",&attendance);
printf("Enter average marks:\n");
scanf("%d",&average_marks);

//check exam eligibility
if(attendance>=75&&average_marks>=40){
printf("you are eligible");
}else{
printf("you are not eligible");
}



    return 0;
}