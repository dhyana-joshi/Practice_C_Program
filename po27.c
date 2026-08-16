#include <stdio.h>
#include <math.h>
int main(){
  int choice;
  float a,b,c,Delta,root1,root2;
printf("Qudratic equation is of form ax^2+bx+c");
printf("Enter value of a\n");
scanf("%f",&a);
printf("Enter value of b\n");
scanf("%f",&b);
printf("Enter value of c\n");
scanf("%f",&c);
Delta=b*b-4*a*c;

if (a == 0)
 { 
    printf("These are not coefficients of a quadratic equation");
    }
    else
    {
      Delta = b * b - 4 * a * c;

      if (Delta == 0)
        choice = 0;
      else if (Delta > 0)
        choice = 1;
      else
        choice = -1;

        switch (choice)
        {
            case 0:
                root1 = -b / (2 * a);
                printf("Both roots are equal.\n");
                printf("Root = %.2f", root1);
                break;

            case 1:
                root1 = (-b + sqrt(Delta)) / (2 * a);
                root2 = (-b - sqrt(Delta)) / (2 * a);

                printf("The quadratic equation has real and distinct roots.\n");
                printf("Root 1 = %.2f\n", root1);
                printf("Root 2 = %.2f", root2);
                break;

            case -1:
                printf("The quadratic equation has imaginary roots.\n");
                printf("Real part = %.2f\n", -b / (2 * a));
                printf("Imaginary part = %.2f", sqrt(-Delta) / (2 * a));
                break;
        }
    }

    return 0;
}