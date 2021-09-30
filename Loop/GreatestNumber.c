#include <stdio.h>

int main()
{
    long long int sumnum,greatnum=0,i,digits;
    scanf("%lld %lld",&sumnum,&digits);
    
    for(i=1;i<=digits;i++)
    {
        greatnum *= 10;
        
        if(sumnum>=9)
        {
            sumnum -= 9;
            greatnum += 9;
            
            
        }
        else
        {
            greatnum += sumnum;
            sumnum =0;
        }
        
        
    }
    printf("%lld",greatnum);
    

    return 0;
}
