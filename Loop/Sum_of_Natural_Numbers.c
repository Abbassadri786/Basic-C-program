#include <stdio.h>

int main()
{
    int n,i;
    float sum=0;
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        sum += i;
        
    }
    printf("Sum of first %d natural numbers=%.2f",n,sum);

    return 0;
}
