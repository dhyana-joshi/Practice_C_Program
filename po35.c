#include <stdio.h>
#include <math.h>
int main(){
  int n;
  int arr[20];
  printf("Enter a number\n");
  scanf("%d",&n);
  int p=0;
while (p<=n){
   int c=0;  
   while(p!=0){
     c+=1;
    arr[c+1]=p%10;
     p/=10;
     } 
   int k;
   for(int i=0;i<=c;i++){
     k+=pow(arr[i],c);
     }
   if(k==p)
     printf("%d",p);
   p++;
}
 return 0;
}
