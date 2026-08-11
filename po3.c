#include <stdio.h>
int main()
{float r;
    printf("Enter radius of circle\n");
    scanf("%f",&r);
    printf("Diameter of circle is %.2f",r*2);
    printf("Circumference of circle is %f",2*r*3.14);
    printf("Area of circle is %f",3.14*r*r);
    return 0;
}
    