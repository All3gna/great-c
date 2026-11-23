#include <stdio.h>
  int main(){
    int score,i,choice;
    char school[50],department[50],subject[40],name[50],course[50];

    while(1){
        printf("\n...........GRADING SYSTEM........................\n");
        printf("\n1.GRADE GENERATOR");
        printf("\n0.EXIT");
        printf("\nEntre a choice :");
        scanf("%d",&choice);

        if(choice==0){
            printf("\nGoodbye!see you next sem ,%s",name);
            break;
        }
        if(choice!=1){
            printf("\nPick either 1 or 0");
            continue;
        }

        printf("\nName :");
        scanf("[^\n]",&name);

        printf("\nSchool :");
        scanf("[^\n]",&name);

        printf("\nDepartment :");
        scanf("[^\n]",&name);

        printf("\nCourse :");
        scanf("[^\n]",&name);

    }
         for(i=1;i<=8;i++){
            printf("\nSubject %d",i);
            printf("\nSubject : ");
            scanf(" %[^\n]",&subject);
            printf("\nScore :");
            scanf("%d",&score);

            if(score>=70){
                printf("\nGrade :A");
                printf("\nExcellent");
            }
                   else if(score>=60){
                    printf("\nGrade : B");
                    printf("\nGoodwork but can do better");

                   }
                   else if(score>=50){
                    printf("\nGrade : C");
                    printf("\nAbove average");
                   }
                   else if(score>=40){
                    printf("\nGrade : D");
                    printf("\nYOu can do better");
                   }
            else{
                printf("\nGrade :F");
                printf("\nTrain!fanya vitu zako zako ,kuwa mjasiri");
            }
         }

         printf("\n===========================================================\n\n");
         printf("\n..................REPORT CARD.......................\n");
        printf("\nName :%s",name);
         printf("\nSchool :%s",school);
          printf("\nDepartment:%s",department);
          printf("\nCourse:%s",course);
         


    return 0;
  }