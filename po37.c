#include <stdio.h>

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d",&num);
  int c=0;
  for(int i=1;i<num;i++){
    if(num%i==0){
        c+=i;
    }
  }
  if(num==c){
    printf("Number %d is a perfect number",num);
  }
  else
    printf("Number %d is not a perfect number",num);
  return 0;
}