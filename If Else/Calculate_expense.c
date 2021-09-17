#include <stdio.h>
int main()
{
    float quantity,price,expense;

    printf("Enter the quantity of item:-");
    scanf("%f",&quantity);

    printf("Enter the price for 1 item:-");
    scanf("%f",&price);

    if(quantity >= 1000)
        {expense = 0.9*(quantity*price);
        printf("\nTotal amount after discount=%.2f\n",expense);}
    else
        {expense= quantity*price;
        printf("\nTotal amount=%.2f\n",expense);}
    return 0;
}
