#include <stdio.h>
#include <math.h>
int main()
{
  float P,R,T;
  printf("Enter principal amount\n");
  scanf("%f",&P);
  printf("Enter rate of interest per annum\n");
  scanf("%f",&R);
  printf("Enter time in years\n");
  scanf("%f",&T);
  float SI=P*R*T/100;
  printf("Simple Interest is %.2f",SI);
  float x=1+R/100;
  float m=P*pow(x,T);
  float CI=m-P;
  printf("Compound interest is %f",CI);
  printf("Subtraction of CI and SI is %f",CI-SI);
  return 0;
}

