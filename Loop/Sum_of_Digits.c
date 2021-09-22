#include <stdio.h>
int main()
{
    int sum=0,num,i,rmndr,reversedigit;

    printf("Enter the num:-");
    scanf("%d",&num);

    while(num >0)
    {
        rmndr=num%10;
        num=num/10;
        sum += rmndr;
        
        printf("sum = %d\t num =%d\t remainder = %d\n reverse = %d\n",sum,num,rmndr,reversedigit);
    }
    return 0;
}

