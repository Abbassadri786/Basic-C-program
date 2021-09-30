#include <stdio.h>

int main()
{
    int num,i,flag=0;
    scanf("%d",num);
    
    if(num>=1000)
    {
        i=num/1000;
        num %= 1000;
        printf("%d*M",i);
        
    }
    if(num>=900)
    {
        i=num/900;
        num %= 900;
        printf("%d*CM",i);
        
    }
    if(num>=500)
    {
        i=num/500;
        num %= 500;
        printf("%d*D",i);
        
    }
    if(num>=400)
    {
        i=num/400;
        num %= 400;
        printf("%d*CD",i);
        
    }
    if(num>=100)
    {
        i=num/100;
        num %= 100;
        printf("%d*C",i);
        
    }
    if(num>=90)
    {
        i=num/90;
        num %= 90;
        printf("%d*XC",i);
        
    }
    if(num>=50)
    {
        i=num/50;
        num %= 50;
        printf("%d*L",i);
        
    }
    if(num>=40)
    {
        i=num/40;
        num %= 40;
        printf("%d*XL",i);
        
    }
    if(num>=10)
    {
        i=num/10;
        num %= 10;
        printf("%d*X",i);
    }
    if(num>=9)
    {
        i=num/9;
        num %= 9;
        printf("%d*IX",i);
    }
    if(num>=5)
    {
        i=num/5;
        num %= 5;
        printf("%d*V",i);
    }
    if(num>=4)
    {
        i=num/4;
        num %= 4;
        printf("%d*IV",i);
    }
    if(num>=1)
    {
        i=num/1;
        num %= 1;
        printf("%d*I",i);
    }
    
    return 0;
}
