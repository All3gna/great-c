#include <stdio.h>
  int main(){

    int scores,i,choice,total;
    char school[50],department[50],subject[8][50],name[50],course[50],grades[8];
    float average;

    while(1){
        printf("\n1.GRADE GENERATOR");
        printf("\n0.EXIT");
        printf("\nChoice  :");
        scanf("%d",&choice);

        if(choice==0){
            printf("\nGoodbye! Meet you next sem");
        }
        if(choice!=1){
            printf("\nInvalid choice");
            continue;
        }
        printf("\nName         :");
        scanf(" %[^\n]",name);
        
        printf("\nSchool       :");
        scanf(" %[^\n]",school);


        printf("\nDepartment   :");
        scanf(" %[^\n]",department);

        printf("\nCourse       :");
        scanf(" %[^\n]",course);

        total=0.0;

        for(i=1;i<=8;i++){
            printf("\nSubject %d",i);
            printf("\nSubject : ");
            scanf(" %[^\n]",subject);

            printf("\nScore :");
            scanf(" %d",&scores);
total=total+scores;
            if(scores>=70 || scores<=100){
                printf("\nA");
            }
                  else if(scores>=60){
                    printf("\nB");

                  }
                  else if(scores>=50){
                    printf("\nC");

                  }
                  else if(scores>=40){
                    printf("\nD");

                  }
            else{
                printf("\nF");
            }
        }
        
     average=total/8.0;
     

    }

    printf("\n==========================================================================\n");
    printf("\n>>>>>>>>>>>>>>>>>>><<<<<<<<<<<REPORT CARD<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\nName       :%s",name);
    printf("\nSchool     :%s",school);
    printf("\nDepartment :%s",department);
    printf("\nCourse     :%s",course);
   
    printf("\n-------------------------------SUBJECTS-----------------------------------\n");
    for(i=1;i<=8;i++){
        printf("/n %s    : %d   :%c  ",subject,scores,grades);
    }
    printf("Total   :%d",total);
    printf("Average :%.1lf",average);

     printf("\nAverage Grade : ");
        if(average >= 70){
            printf("A - Excellent");
        }
        else if(average >= 60){
            printf("B - Goodwork but can do better");
        }
        else if(average >= 50){
            printf("C - Above average");
        }
        else if(average >= 40){
            printf("D - You can do better");
        }
        else{
            printf("F - Train! fanya vitu zako zako, kuwa mjasiri");
        }

        printf("\n===========================================================\n");
    


    return 0;
  }