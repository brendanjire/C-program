#include<stdio.h>
/* Brenda Njire
Kirinyaga University
ct101/g/26465/25
computer science
*/
int main()
{
const float pi=3.142;
float radius,height,volume,surface_area;

printf("Enter radius of the cylinder:\n");
scanf("%f",&radius);
printf("Enter height of the cylinder:\n");
scanf("%f",&height);
//calculating volume and surface area of cylinder
 volume=pi*radius*radius*height;
 surface_area=2*pi*radius*radius+(2*pi*radius*height);
 //displaying the output
 printf("volume of cylinder=%.3f\n",volume);
 printf("surface area of cylinder=%.2f\n",surface_area);




    return 0;
}