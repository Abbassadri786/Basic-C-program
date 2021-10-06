#include <stdio.h>

int main()
{
   int i,n,pos,max;

   printf("Enter the size of an array:-");
   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   arr[0]=max;

for(i=1;i<n;i++)
   {
       if(arr[i]>max)
       {
           max=arr[i];
       }
   }

printf("\n%d",max);
 return 0;
}
