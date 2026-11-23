//check lowest value
#include <stdio.h>
  int main(){
    int i,lowest,ages[10];
    
    int length =sizeof(ages)/sizeof(ages[0]);

    printf("\n Entre ages of ten students : ");
    for(i=0;i<length;i++){
        printf("\n Student %d :",i+1);
        scanf("%d",&ages[i]);
    }
    lowest=ages[0];
    for(i=0;i<length;i++){
        if(ages[0]<ages[i]){
            lowest=ages[0];
            
        }
    }
    
printf("\n The lowest is %d years old",lowest);
    return 0;
  }