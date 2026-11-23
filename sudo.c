#include <stdio.h>

int main(){
    int scores[8], i, choice, total;
    char school[50], department[50], subject[8][50], name[50], course[50], grades[8];
    float average;

    while(1){
        printf("\n1.GRADE GENERATOR");
        printf("\n0.EXIT");
        printf("\nChoice  :");
        scanf("%d", &choice);

        if(choice == 0){
            printf("\nGoodbye! Meet you next sem");
            break; // out
        }
        if(choice != 1){
            printf("\nInvalid choice");
            continue;
        }

        printf("\nName         :");
        scanf(" %[^\n]", name);
        
        printf("\nSchool       :");
        scanf(" %[^\n]", school);

        printf("\nDepartment   :");
        scanf(" %[^\n]", department);

        printf("\nCourse       :");
        scanf(" %[^\n]", course);

        total = 0;

        for(i = 0; i < 8; i++){
            printf("\nSubject %d", i+1);
            printf("\nSubject : ");
            scanf(" %[^\n]", subject[i]); //array stores subjects

            printf("\nScore :");
            scanf("%d", &scores[i]); // i stores scores as of subject

            total = total + scores[i];

            if(scores[i] >= 70 && scores[i] <= 100){
                grades[i] = 'A';
                printf("\nA ");
            }
            else if(scores[i] >= 60){
                grades[i] = 'B';
                printf("\nB ");
            }
            else if(scores[i] >= 50){
                grades[i] = 'C';
                printf("\nC ");
            }
            else if(scores[i] >= 40){
                grades[i] = 'D';
                printf("\nD ");
            }
            else{
                grades[i] = 'F';
                printf("\nF ");
            }
        }
        
        average = total / 8.0;

        // REPORT CARD - NOW INSIDE while(1)
        printf("\n==========================================================================\n");
        printf("\n>>>>>>>>>>>>>>>> REPORT CARD <<<<<<<<<<<<<<\n");
        printf("\nName       : %s", name);
        printf("\nSchool     : %s", school);
        printf("\nDepartment : %s", department);
        printf("\nCourse     : %s", course);
       
        printf("\n-------------------------------SUBJECTS-----------------------------------\n");
        for(i = 0; i < 8; i++){
            printf("\n%s : %d : %c", subject[i], scores[i], grades[i]);
        }

        printf("\nTotal   : %d", total);
        printf("\nAverage : %.1f", average);

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
    }

    return 0;
}
            