#include<stdio.h>


int printArray(int arr[]){
    int size,i;
    
    if(i<size)
    {
        return printArray(arr[]);
    }
}


int main()
{
    int size,i;
    scanf("%d",&size);
    int arr[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr[])
    printf("%d",printArray(arr[]));
}
 
