#include <stdio.h>
  int main(){
    int i,scores[8],choice,total=0;
    int length=sizeof(scores)/sizeof(scores[0]);
    float average;
    char grades[8];
    char school[50],department[50],name[50],course[50],subject[8][50];

    while(1){
        printf("\n1.Report Card Generater");
        printf("\n0.Exit");
        printf("\nChoice :");
        scanf("%d",&choice);

        if(choice==0){
            printf("\nGoodbye ! Meet you next sem,freshman");
            break;
        }
        if(choice!=1){
            printf("\nRetry");
            continue;
        }

        printf("\nName       :");
        scanf(" %[^\n]",&name);

        printf("\nSchool     :");
        scanf(" %[^\n]",&school);

        printf("\nDepartment :");
        scanf(" %[^\n]",&department);

        printf("\nCourse     :");
        scanf(" %[^\n]",&course);

        total =0;

        for(i=0;i<length;i++){
            printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf("\nSubject %d",i+1);
            printf("\nSubject :");
            scanf(" %[^\n]",subject[i]);
            printf("\nScores :");
            scanf("%d",&scores[i]);
total+=scores[i];
            if(scores[i]>=70){
                grades[i]='A';
                printf("\nExcellent");
            }
                   else if(scores[i]>=60){
                    grades[i]='B';
                    printf("\nGoodwork but can do better");

                   }
                   else if(scores[i]>=50){
                    grades[i]='C';
                    printf("\nAbove average");
                   }
                   else if(scores[i]>=40){
                    grades[i]='D';
                    printf("\nYOu can do better");
                   }
            else{
                grades[i]='F';
                printf("\nTrain!fanya vitu zako zako ,kuwa mjasiri");
            }

        }
        
        average=total/8.0;
printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\n#########################REPORT CARD#####################################\n\n");

printf("\nName          :%s",name);
printf("\nSchool        :%s",school);
printf("\nDepartment    :%s",department);
printf("\nCourse        :%s",course);

for(i=0;i<length;i++){
    printf("\n%s           : %d      : %c ",subject[i],scores[i],grades[i]);
}
printf("\n\nTotal :%d",total);
printf("\nAverage :%f",average);

if(average>=70){
                printf("\nGrade :A");
                printf("\nExcellent");
            }
                   else if(average>=60){
                    printf("\nGrade : B");
                    printf("\nGoodwork but can do better");

                   }
                   else if(average>=50){
                    printf("\nGrade : C");
                    printf("\nAbove average");
                   }
                   else if(average>=40){
                    printf("\nGrade : D");
                    printf("\nYOu can do better");
                   }
            else{
                printf("\nGrade :F");
                printf("\nTrain!fanya vitu zako zako ,kuwa mjasiri");
            }


    }
    return 0;
  }