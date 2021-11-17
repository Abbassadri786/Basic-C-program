#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,i,j,sum=0;
    long long int size;
    scanf("%lld%d",&size,&num);
    long long int arr[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int n=size;
    
    for (i = 0; i < n; i++) 
    {
        sum += arr[i];

        for (j = i + 1; j <= n; j++) 
        {
            if (sum == num) 
            {
                printf( "%d %d\n",i+1, j);
                break;
                
            }
            else if (sum > num || j == n)
                break;
            sum = sum + arr[j];
            
        }
        sum=0;
    }
    
    
    return 0;
}
