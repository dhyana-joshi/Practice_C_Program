#include <stdio.h>

int main()
{ int days,l1,l2;
    printf("Enter number of days\n");
    scanf("%d",&days);
    printf("The %d days in is %d years",days,days/365);
    l1=days%365;
    printf(",%d months",l1/30);
    l2=l1%30;
    printf(",%d weeks",l2/7);
    printf(" and %d days",l2%7);
    return 0;
}