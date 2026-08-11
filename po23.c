#include <stdio.h>

int main(){
  int num_1,num_2;
  printf("Enter a number one\n");
  scanf("%d",&num_1);
  printf("Enter a number two\n");
  scanf("%d",&num_2);
  switch (num_1>num_2){
    case 0:
     printf("The maximum of two numbers is %d",num_2);
     break;
    case 1:
     printf("The maximum of two numbers is %d",num_1);
     break;
  }
  return 0;
}