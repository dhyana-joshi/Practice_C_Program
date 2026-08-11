#include <stdio.h>
#include <ctype.h>
int main(){
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
    if (n>0)
        printf("The entered number is positive");
    else if (n<0)
        printf("The entered number is negative");
    else
        printf("The entered number is zero");        
  return 0;
}