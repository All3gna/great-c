//THE BEGINNING
#include <stdio.h> 
  int main(){
    int scores[8],i,choice,total=0;
    float average;
    char grades[i],name[50],school[50],department[50],course[50],subject[8][50];
    int length=sizeof(scores)/sizeof(scores[0]);

    while(1){
        printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("\n0.Exit");
        printf("\n1.Report Card Generater");
        printf("\nChoice :");
        scanf("%d",&choice); 

        if(choice==0){
            printf("\nThanks for the vist,see you next sem");
            break;
        }
        if(choice!=1){
            printf("\n Repick ");
            continue;
        }
        
        printf("\tSchool         :");
         scanf(" %[^\n]",school);
        printf("\tDepartment     :");
         scanf(" %[^\n]",department);
        printf("\tCourse         :");
         scanf(" %[^\n]",course);


           printf("\nName           :");
        scanf(" %[^\n]",name);
        for(i=0;i<length;i++){
            printf("\nSubject :");
            scanf(" %[^\n]",subject[i]);
            printf("Score : ");
            scanf(" %d",&scores[i]);

            total+=scores[i];

            if(scores[i]>=70 && scores[i]<=100){
                grades[i]='A';
                printf("\nGrade : A");
                printf("\nExcellent results");
            
            }
                      else if(scores[i]>=60){
                        grades[i]='B';
                        printf("\nGrade : B");
                        printf("\nGood work but you can do better");
                        
                      }
                      else if(scores[i]>=60){
                        grades[i]='C';
                        printf("\nGrade : C");
                        printf("\nGood work");
                        
        }
                    else if(scores[i]>=60){
                        grades[i]='D';
                        printf("\nGrade : D");
                        printf("\nYou have the potential");}
                        
          else{
                         grades[i]='F';
                        printf("\nGrade : F");
                        printf("\nThere is room for improvement");
                        
                    }
                    
    }  average=total/8.0;               
           printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n") ;
           printf("\n\n\t %s's REPORT  CARD ",name)  ;
           
           printf("\n\t School      :%s",school);
           printf("\n\t Department  :%s",department);
           printf("\n\t Course      :%s\n\n",course);

           printf("\n Name        :%s",name);

           printf("\n\t SUBJECT GRADES \n");
           for(i=0;i<length;i++){
            printf("\n%s        : %d      : %c",subject[i],scores[i],grades[i]);
           }
           printf("\nTotal   :%d",total);
           printf("\nAverage :%.3f",average);

           if(average>=70 && average <=100){
            printf("\nAverage Grade : A");
            printf("\tRemarks       :Excellent,my boy!");
           }
                       else if(average>=60){
                        printf("\nAverage Grade :B");
                        printf("\tRemarks : Good work ,my boy!");
                       }
                       else if(average>=60){
                        printf("\nAverage Grade :C");
                        printf("\tRemarks : Good!");
                       }
                       else if(average>=60){
                        printf("\nAverage Grade :D");
                        printf("\tRemarks : You have the potential!");
                       }
             
                else {
                        printf("\nAverage Grade :F");
                        printf("\tRemarks : There is room for improvement!");
                       }
                      }
  return 0;
    }