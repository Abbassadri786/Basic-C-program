#include <stdio.h>

int main()
{
    int i,j,size;
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i+j>=(size-1)  )
            printf(" *");
            
            else
            printf(" ");
        }
        for(j=size;j>0;j--)
        {
            if(i+j<=(size-1)  )
            printf(" *");
            
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
