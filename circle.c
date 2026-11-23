#include <stdio.h>
#define pi 3.14159
  int main(){
    
    double area;
    double circumference;
double r;
printf("Entre the radius :");
scanf(" %lf",&r);
area=pi*r*r;
circumference=2*pi*r;

printf("\n Area : %.2lf \t circumference:%.2lf ",area,circumference);
return 0;
  }
