#include <stdio.h>

int main(){
  float a,b,c,Delta,root1,root2;
printf("Qudratic equation is of form ax^2+bx+c");
printf("Enter value of a\n");
scanf("%f",&a);
printf("Enter value of b\n");
scanf("%f",&b);
printf("Enter value of c\n");
scanf("%f",&c);
Delta=b*b-4*a*c;
if (a==0)
    printf("These are not coefficients of quadratic equation");
else{
    switch(Delta){

   case 0:
    root1=-b/(2*a);
    printf("Both roots are equal with value %f",root1);
  }
  else{
    root1=-b/(2*a);
    root1=sqrt(-Delta)/(2*a);
    printf("The quadratic equation has imaginary roots\n");
    printf("Root 1=%.2f-%.2f",root1,root2);
    printf("Root 2=%.2f+%.2f",root1,root2); 
  }
  return 0;