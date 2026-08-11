#include <stdio.h>

int main(){
  int num;
  printf("Enter a number(with sign)\n");
  scanf("%d",&num);
  switch(num>0){
    case 0:
     if (num==0){
       printf("Number is zero");
       break;}
     else{
       printf("Number is negative");
       break;}
    case 1:
     printf("Number is positive");     
  }
  return 0;
}