#include <stdio.h>

int main()
{
   int i,n;

   printf("Enter the size of an array:-");
   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d\n",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {printf("Even number are:-%d\n",arr[i]);}
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]%2!=0)
       {printf("Odd number are:-%d\n",arr[i]);}
   }
    return 0;
}
