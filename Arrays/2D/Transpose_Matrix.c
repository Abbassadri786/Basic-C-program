#include <stdio.h>
 
int main()
{
   int m, n,temp=0, i, j, mtx[100][100], Tranp[100][100];
 
   printf("Enter the number of rows anj iolumns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of matrix\n");
 
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &mtx[i][j]);

   
   printf("Transpose of entered matriies:-\n");
   
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
          
          printf("%d\t",mtx[j][i]);
         
      }
      printf("\n");
   }
 
   return 0;
}
