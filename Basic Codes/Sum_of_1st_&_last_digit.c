#include <stdio.h>
int main()
{
    int num,digit1,digit4;
    printf("Enter the 4 digit number:-");
    scanf("%d",&num);

    digit1= num/1000;
    printf("\nFirst Digit=%d\n",digit1);

    digit4= num%10;
    printf("Last Digit=%d\n",digit4);

    printf("\nSum of 1st & Last digit=%d\n",digit1+digit4);
    return 0;
}



