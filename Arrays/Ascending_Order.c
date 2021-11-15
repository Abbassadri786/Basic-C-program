#include <stdio.h>
int main()

{
   int i,j,n,temp;

   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[j]>arr[i] )
           {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }
           
       }
   }
       
       for(i=0;i<n;i++)
       printf(" %d ",arr[i]);
     
   
   return 0;

}
