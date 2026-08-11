#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c,x1,x2,D;
  printf("Let the quadratic equation be of form ax^2+bx+c\n");
  printf("Enter value of a");
  scanf("%f",&a);
  printf("Enter value of b");
  scanf("%f",&b);
  printf("Enter value of c");
  scanf("%f",&c);
  D=b*b-4*a*c;
  if (a==0)
    printf("These are not coefficients of quadratic equation");
  if (D>0){
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    printf("The roots of the quadratic equation is %f and %f",x1,x2);
  }
  else if(D==0){
    x1=-b/(2*a);
    printf("Both roots are equal with value %f",x1);
  }
  else{
    x1=-b/(2*a);
    x1=sqrt(-D)/(2*a);
    printf("The quadratic equation has imaginary roots\n");
    printf("Root 1=%.2f-%.2f",x1,x2);
    printf("Root 2=%.2f+%.2f",x1,x2); 
  }
  return 0;
}