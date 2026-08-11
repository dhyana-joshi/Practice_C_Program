#include <stdio.h>

int main()
{
    float Celcius,Fahrenheit;
    printf("Enter temperature in Celcius\n");
    scanf("%f",&Celcius);
    Fahrenheit=(9/5.0*Celcius)+32;
    printf("Temperature in Fahrenheit is %.2f",Fahrenheit);
    return 0;
}