#include <stdio.h>

int main()
{int amount,l1,l2,l3,l4;
    printf("Enter amount\n");
    scanf("%d",&amount);
    printf("Notes of 500 rupees are %d\n", amount/500);
    l1=amount%500;
    printf("Notes of 100 rupees are %d\n",amount/100);
    l2=l1%100;
    printf("Notes of 50 rupees are %d\n",l2/50);
    l3=l2%50;
    printf("Notes of 20 rupees are %d\n",l3/20);
    l4=l3%20;
    printf("Notes of 10 rupees are %d",l4/10);
    return 0;
}