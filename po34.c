#include <stdio.h>
<<<<<<< HEAD

int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i=0;
  while(i<=n){
    while(i!=0){
      int c=0;
      i/=10;
      c++;
    }
    if 
  return 0;
}
=======
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
>>>>>>> e76971c630c94a609ff38fc0cfc176cb3d477461
