#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value:-\n");
    scanf("%d",&x);

    if(x<0)
    {
        x *= (-1);
        printf("%d",x);
    }
    else
    {
        printf("%d",x);
    }

    return 0;


}
