#include <stdio.h>
int main()
{
    int fac=1,num,i;

    printf("Enter the number you want factorial:-");
    scanf("%d",&num);

    for(i=1; i<=num ;i++)
    {
        fac=fac*i;

    }
    printf("Factorial of %d is %d\t",num,fac);

    return 0;
}
