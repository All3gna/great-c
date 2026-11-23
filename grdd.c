#include <stdio.h>

int main() {
    printf("\nGRADING SYSTEM\n");
    char subject[20];
    printf("\ninput subject : ");
    scanf("%c",subject);
      int marks;
printf("\nInput your marks : ");
if(scanf("%d",&marks) !=1) {
    printf("\nINVALID INPUT PLEASE INPUT A NUMBER");
}
else if(marks>100) {
    printf("\nPLEASE INPUT A NUMBER BETWEEN 0 AND 100");
}
else if(marks<0) {
printf("\nPLEASE INPUT A NUMBER BETWEEN 0 AND 100");
}
else if(marks>=70) {
    printf("\nGrade ; A");
}
else if(marks>=60) {
    printf("\nGrade ; B");
}
else if(marks>=50) {
    printf("\nGrade ; C");
}
else if(marks>=40) {
    printf("\nGrade ; D");
}
else if(marks>=0) {
    printf("\nGrade ; E");
}


return 0;
}