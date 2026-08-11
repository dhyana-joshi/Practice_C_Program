#include <stdio.h>

int main(){
  float physics,chemistry,maths,biology,computer,perc;
  printf("Enter physics marks\n");
  scanf("%f",&physics);
  printf("Enter chemistry marks\n");
  scanf("%f",&chemistry);
  printf("Enter maths marks\n");
  scanf("%f",&maths);
  printf("Enter biology marks\n");
  scanf("%f",&biology);
  printf("Enter computer marks\n");
  scanf("%f",&computer);
  perc=(physics+chemistry+maths+biology+computer)/5;
  if (perc>=90.0)
     printf("Grade of student is A");
  else if(perc>=80.0)
    printf("Grade of student is B");
  else if(perc>=70.0)
    printf("Grade of student is C");
  else if(perc>=60)
    printf("Grade of student is D");
  else if(perc>=40)
    printf("Grade of student is E");
  else
    printf("Grade of student is F");           
  return 0;
}