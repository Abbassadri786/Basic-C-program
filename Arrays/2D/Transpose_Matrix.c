#include <stdio.h>

int main()
{
    int mtx[100][100],i,j,transp[100][100],r,c;
    
    scanf("%d%d",&r,&c);
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mtx[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transp[i][j]=mtx[j][i];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d ",transp[i][j]);
            if(j==r-1)
            printf("\n");
        }
    }
    

    return 0;
}
