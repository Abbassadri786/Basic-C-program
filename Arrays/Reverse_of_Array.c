#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,temp;
    scanf("%d",&size);
    
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
