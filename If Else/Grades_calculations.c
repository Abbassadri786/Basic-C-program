#include <stdio.h>
int main()
{
    int a;
    printf("Enter the score:-");
    scanf("%d",&a);

    if(a>=80 && a<=100)
    {printf("A grade");}
    else if(a>=70 && a<=79)
    {printf("B grade");}
    else if(a>=60 && a<=69)
    {printf("C grade");}
    else if(a>=50 && a<=59)
    {printf("D grade");}
    else if(a>=0 && a<=49)
    {printf("F grade");}


    return 0;
}
