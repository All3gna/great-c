#include <stdio.h>

int main() {
  float ages[5];
  float avg,sum=0;
  int i,length =sizeof(ages)/sizeof(ages[0]);
  
  printf("\nEntre the ages of 5 people : ");
   for(i=0;i<length;i++){
    printf("\nAge %d:",i+1);
  scanf("%f",&ages[i]);
  }
  
  
  for(i=0;i<length;i++){
  sum+=ages[i];
  }
  avg=sum/length;
  printf("\nThe avg is %f ",avg);
  
  return 0;
}