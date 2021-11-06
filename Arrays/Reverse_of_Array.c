#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    scanf("%d",&size);
    
    int arr[size],rev[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=size-1;i>=0;i--)
    {
        rev[i]=arr[i];
        printf("%d ",rev[i]);
    }
    
    return 0;
}
