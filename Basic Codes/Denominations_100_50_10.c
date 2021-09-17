#include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount:-");
    scanf("%d",&amount);

    printf("\nHundred rupee notes=%d \n",(amount/100));
    printf("\nFiftey rupee notes=%d \n",((amount%100)/50));
    printf("\nTen rupee notes=%d \n",(((amount%100)%50)/10));
    printf("\nRemaining amount=%d \n",(((amount%100)%50)%10));

    return 0;
}
