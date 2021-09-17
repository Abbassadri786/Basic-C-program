#include <stdio.h>
int main()
{
    int num,digit2,digit3;
    printf("Enter the 4 digit number:-");
    scanf("%d",&num);

    num= num/10;
    digit3= num%10;
    printf("\nThird digit=%d\n",digit3);

    num= num/10;
    digit2= num%10;
    printf("Second digit=%d\n",digit2);


    printf("\nSum of middle 2 digits=%d\n",digit2+digit3);
    return 0;
}
