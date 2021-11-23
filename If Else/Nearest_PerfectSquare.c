#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int num,left_side,right_side,sr;
    scanf("%lld",&num);
    
    sr=sqrt(num);
    
    left_side=abs(((sr)*(sr))-(num));
    right_side=abs(((sr+1)*(sr+1))-(num));
    
    
    
    if(left_side<right_side)
    {
        printf("%lld %lld",(sr)*(sr),left_side);
    }
    else if(left_side==right_side)
    {
        printf("%lld 0",num);
    }
    else
    {
        printf("%lld %lld",(sr+1)*(sr+1),right_side);
    }
    
    
    return 0;
    
}
