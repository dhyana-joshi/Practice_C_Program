#include <stdio.h>
//To print all even numbers of given range
int main(){
  int a,b;
  printf("Enter starting and ending value of range\n");
  scanf("%d,%d",&a,&b);
  for(a;a<=b;a++){
    if(a%2==0){
        printf("%d\n",a);
    }
  }
  return 0;
}