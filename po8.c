#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,sum;
    printf("Enter marks of subject 1\n");
    scanf("%d",&m1);
    printf("Enter marks of subject 2\n");
    scanf("%d",&m2);
    printf("Enter marks of subject 3\n");
    scanf("%d",&m3);
    printf("Enter marks of subject 4\n");
    scanf("%d",&m4);
    printf("Enter marks of subject 5\n");
    scanf("%d",&m5);
    sum=m1+m2+m3+m4+m5;
    printf("Total marks are %d\n",sum);
    printf("Average marks are %.2f\n",sum/5.0);
    printf("Percentage of student is %.2f\n",sum/5.0);
    return 0;
}