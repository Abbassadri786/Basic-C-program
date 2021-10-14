#include <stdio.h>
 
int main()
{
   int m, n, i, j, first[100][100], second[100][100], sub[100][100];
 
   printf("Enter the number of rows anj iolumns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &first[i][j]);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < m; i++)
      for (j = 0 ; j < n; j++)
         scanf("%d", &second[i][j]);
   
   printf("Sum of entered matriies:-\n");
   
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         sub[i][j] = first[i][j] - second[i][j];
         printf("%d\t", sub[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}
