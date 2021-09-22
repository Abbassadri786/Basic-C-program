//Q)Write a Program to print Fibonacci Series.

#include <stdio.h>
int main()
{
    int i,n,sum=0,num1=0,num2=1;
    printf("Terms:-");
    scanf("%d",&n);
    printf("%d\t%d\t",num1,num2);
    for(i=0;i<n-2;i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        printf("%d\t",sum);
    }
    return 0;
}
