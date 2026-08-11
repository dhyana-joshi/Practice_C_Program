#include <stdio.h>
int main()
{float length;
    printf("Enter length in centimetre\n");
    scanf("%f",&length);
    printf("Length in metres is %.2f",length/100);
    printf("Length in kilometers is %f",length/100000);
    return 0;
}
