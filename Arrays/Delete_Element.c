#include <stdio.h>

int main()
{
   int i,n,pos;

   printf("Enter the size of an array:-");
   scanf("%d",&n);

   printf("Enter the position to delete desired element:-");
   scanf("%d",&pos);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d\n",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i!=pos-1)
       {
           printf("%d\n",arr[i]);
       }
   }

    return 0;
}

