#include<stdio.h>
 
int main()
{
    int a[100],n,num,i,low,high,mid,flag=0;
 
    printf("Enter size of array:\n");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be search:\n");
    scanf("%d",&num);
 
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==num)
        {
            printf("Element found at %d position",mid + 1);
            flag=1;
            break;
        }
        if(a[mid]>num)
            high=mid-1;
        else
            low=mid+1;
    }
    if(flag=0)
        printf("No such element is found");
 
    return 0;
}
