#include <stdio.h>

int main(){
  int num_1,num_2,num_3;
  printf("Enter a number\n");
  scanf("%d",num_1);
  printf("Enter another number\n");
  scanf("%d",num_2);
  printf("Enter one more number\n");
  scanf("%d",num_3);
  if (num_1>num_2 && num_1>num_3)
    printf("The maximum of three numbers is %d",num_1);
  else if(num_2>num_1 && num_2>num_3)
    printf("The maximum of three numbers is %d",num_2);
  else
    printf("The maximum of three numbers is %d",num_3);
  return 0;
}