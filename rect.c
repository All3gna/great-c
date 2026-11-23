#include <stdio.h>
 int main(){
    int x,y;
    int area,perimeter;
  
    printf("\nEntre the length :");
    scanf("%d",&x);
    printf("\nEntre width :");
    scanf("%d",&y);
 area= x*y;
 perimeter=2*(x+y);
    printf("\nArea :%d \t Perimeter :%d",area,perimeter);
    return 0;
 }