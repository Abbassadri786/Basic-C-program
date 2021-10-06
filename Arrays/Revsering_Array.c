#include <stdio.h>

int main()
{
   int i,n;
   
   printf("Enter the size of an array:-");
   scanf("%d",&n);
   
   int arr[n];
   
   for(i=0;i<=n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=n;i>=0;i++)
   {
       printf("%d\n",arr[i]);
   }

    return 0;
}
