#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=6; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}

//Inverted Triangle of numbers

#include <stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter the no. of Rows:-");
    scanf("%d",&rows);
    printf("\n\n");
    
    for(i=rows;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }

    return 0;
}
