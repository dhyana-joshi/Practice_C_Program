#include <stdio.h>
#include <math.h>
int main(){
  int n;
  int arr[20];
  printf("Enter a number\n");
  scanf("%d",&n);
  int c=0;
  while(n!=0){
    c+=1;
   arr[c+1]=n%10;
    n/=10;
    } 
  int k;
  for(int i=0;i<=c;i++){
    k+=pow(arr[i],c);
    }
  if(k==n)
    printf("Given number is an armstrong number");
  else
    printf("Given number is not an armstrong number");
  return 0;
}
