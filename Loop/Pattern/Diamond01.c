#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=6;j++)
        {
            if(i+j<=5)
            printf(" ");
            
        }
        for(j=0;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=0;i<=6;i++)
    {
        for(j=6;j>=0;j--)
        {
            if(i+j>=7)
            printf(" ");
        }
        for(j=6;j>=i;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
    

    return 0;
}
