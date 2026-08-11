#include <stdio.h>
int main(){
    float inr,usd;
    printf("Enter amount in rupees\n");
    scanf("%f", &inr);
    usd=inr/95.39;
    printf("Amount in dollars is %.2f", usd );
    return 0;
}