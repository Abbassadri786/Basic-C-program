#include <stdio.h>
int main()

{
   int i,j,n,count=0,temp=0;

   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(arr[j]<arr[i] )
           {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }
           
       }
   }
       
       for(i=0;i<n;i++)
       printf("%d ",arr[i]);
     
   
   return 0;

}
