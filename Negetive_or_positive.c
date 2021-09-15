#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    if(x<=0)
    { printf("Number Entered is negative\n"); }

    else if(x==0)
    { printf("Number Entered is 0\n"); }

    else
    {printf("Number entered is positive\n");}

    return 0;
}
