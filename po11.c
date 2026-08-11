#include <stdio.h>

int main(){
  int n,d1,d2,d3,d4,new;
   printf("Enter a four digit number\n");
   scanf("%d",&n);
   d1=n/1000;
   d2=n/100-d1*10;
   d3=n/10-d1*100-d2*10;
   d4=n-d3*10-d2*100-d1*1000;
   new=d4*1000+d3*100+d2*10+d1;
   printf("The original number is %d",n);
   printf("The reversed number is %d",new);
  return 0;
}