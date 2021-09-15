#include <stdio.h>
int main()
{
    int x;
    printf("Enter the year btw 1900 to 3000:-");
    scanf("%d",&x);

    if(x%4==0 && x%100!=0 || x%400==0)
    {
        printf("\nYear is Leap Year\n");
    }
    else
    {
        printf("\nYear is not a leap year\n");
    }

      return 0;
}
