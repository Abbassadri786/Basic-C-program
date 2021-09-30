#include <stdio.h>

int main()
{
    int num,i,flag=0;
    
    scanf("%d",num);
    if(num>1000)
    {
        i=num/1000;
        num %= 1000;
        printf("%d*M",i);
        
    }
    if(num>900)
    {
        i=num/900;
        num %= 900;
        printf("%d*M",i);
        
    }
    if(num>500)
    {
        i=num/500;
        num %= 500;
        printf("%d*M",i);
        
    }
    if(num>400)
    {
        i=num/400;
        num %= 400;
        printf("%d*M",i);
        
    }
    if(num>100)
    {
        i=num/100;
        num %= 100;
        printf("%d*M",i);
        
    }
    if(num>90)
    {
        i=num/90;
        num %= 90;
        printf("%d*M",i);
        
    }
    if(num>50)
    {
        i=num/50;
        num %= 50;
        printf("%d*M",i);
        
    }
    if(num>40)
    {
        i=num/40;
        num %= 40;
        printf("%d*M",i);
        
    }
    

    

    return 0;
}
