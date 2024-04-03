#include<stdio.h>
#include<conio.h>
#define PI 3.142
void main()
{
  float r, area, volume;
clrsctr();
printf("Enter the volume of radius  :");
scanf("%f",&r);
area=4.0*PI*r*r;
volume=(4.0/3.0)*PI*r*r*r;
printf("\n Area of sphere=%3f",area);
printf("\n volume of sphere=%3f",volume);
getch();
}
