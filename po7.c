#include <stdio.h>

int main()
{float A1,A2;
    printf("Enter angle 1\n");
    scanf("%f",&A1);
    printf("Enter angle 2\n");
    scanf("%f",&A2);
    printf("Third angle of triangle is %.2f",180.0-A1-A2);
    return 0;
}