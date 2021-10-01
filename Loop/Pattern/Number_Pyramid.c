#include <stdio.h>

int main()
{
    int i,j,size,count=0;
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i+j>=(size-1))
            {printf(" %d",i);
            count++;
                
            }
            
            else
            {printf(" ");}
        }
        printf("\n");
        
    }

    return 0;
}
