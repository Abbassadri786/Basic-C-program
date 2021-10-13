#include <stdio.h>

int main()
{
   int size1,size2,i,j,m1[100][100],m2[100][100],sum[100][100];
   
   scanf("%d%d",&size1,&size2);
   
   for(i=0;i<size1;i++)
   {
       for(j=0;j<size2;j++)
       scanf("%d",m1[i][j]);
   }
   for(i=0;i<size1;i++)
   {
       for(j=0;j<size2;j++)
       scanf("%d",m2[i][j]);
   }
   for(i=0;i<size1;i++)
   {
       for(j=0;j<size2;j++)
       sum[i][j]=m1[i][j]+m2[i][j];
       
   }
   for(i=0;i<size1;i++)
   {
       for(j=0;j<size2;j++)
       {
           if(size1==size2)
           printf("%d   ", sum[i][j]);
           
       }
       
   }

    return 0;
}
