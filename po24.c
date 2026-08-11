#include <stdio.h>

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d",&num);
  switch(num%2==0){
    case 0:
     printf("Number %d is odd number",num);
     break;
    case 1:
     printf("Number %d is an even number",num);
     break;
  }
  return 0;
}