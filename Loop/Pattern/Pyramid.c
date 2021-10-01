#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\n\n");

    
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=2*rows-1; j++)
        {
           
            if(j>=rows-(i-1) && j<=rows+(i-1))
            {printf(" * ");}
            
            else
            {printf("   ");}
        }

        printf("\n");
    }

    return 0;
}

//Method 2

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
       
        
        printf("\n");
    }

    return 0;
}
