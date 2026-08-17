#include <stdio.h>

int main(){
  int N;
  printf("Enter a number\n");
  scanf("%d",&N);
  int c=0;
  for(int i=1;i<=N;i++){
    c+=i;
  }
  printf("Sum of all natural numbers between 1 to %d is %d",N,c);
  return 0;
}