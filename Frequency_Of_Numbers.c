#include <stdio.h>

int main()
{
    int size,i,j,flag=0;
    scanf("%d",&size);
    int arr[size];
    
    for(i=0; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int freq[size],count=0;
    
    for(i=0;i<size;i++)
    {
        for(j=i+1; j<size ; j++)
        {
            if(arr[i]==arr[j])
            count++;
            freq[i]=flag;
        }
        if(freq[i]!=flag)
        freq[i]=count;
        
    }
    for(int i = 0; i < size; i++){    
        if(freq[i] != flag){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", freq[i]);    
        }    
    }    

    return 0;
}
