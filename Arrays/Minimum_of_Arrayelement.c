#include <stdio.h>

int main()
{
   int i,n,pos,min;

   printf("Enter the size of an array:-");
   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   min=arr[0];

for(i=1;i<n;i++)
   {
       if(arr[i]<min)
       {
           min=arr[i];
       }
   }

printf("\n%d",min);
 return 0;
}
