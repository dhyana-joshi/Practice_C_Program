#include <stdio.h>

int main(){
  float n1,n2;
  int ch;
  printf("Enter number one:\n");
  scanf("%f",&n1);
  printf("Enter number two:\n");
  scanf("%f",&n2);
  printf("Enter the numbers to do following operations\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division");
  scanf("%d",&ch);
  switch(ch){
    case 1:
    printf("Addition of two numbers is %.2f",n1+n2);
    break;
    case 2:
    if (n1>n2){
     printf("Subtraction of two numbers is %.2f",n1-n2);
     break;}
    else{
      printf("Subtraction oftwo numbers is %.2f",n2-n1);
      break;
    }
    case 3:
    printf("Multiplication of two numbers is %.2f",n1*n2);
    break;
    case 4:
    if(n2==0){
     printf("Division of two numbers is not possible");}
    else{
     printf("Division of two numbers is %.2f",n1/n2);  
    break;}   
  }
  return 0;
}