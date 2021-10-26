#include <stdio.h>

int main()
{
    int size,i,numToFind,flag=0;
    scanf("%d",&size);
    
    int arr[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&size);
    }
    scanf("%d",&numToFind);
    
    for(i=0;i<size;i++)
    {
        if(arr[i]==numToFind)
        flag=1;
        break;
    }
    if(flag==1)
    printf("%d is found at %d position",numToFind,i);
    
    else
    printf("%d is not found",numToFind);
    
    

    return 0;
}
