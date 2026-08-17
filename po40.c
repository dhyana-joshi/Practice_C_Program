#include <stdio.h>

int main(){
  int N;
  printf("Enter a number\n");
  scanf("%d",&N);
  for(int i=1;i<=10;i++){
    printf("%d X %d = %d\n",i,N,i*N);
  }
  return 0;
}