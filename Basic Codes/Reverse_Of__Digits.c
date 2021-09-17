#include <stdio.h>
int main()
{
    int num,d1,d2,d3,d4,result;
    printf("Enter a 4 digit num:-");
    scanf("%d",&num);

    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=num%10;
    d1=num/10;

    result=d4*1000 + d3*100 + d2*10 + d1;
    printf("\nReverse of a digit is = %d\n",result);
    return 0;
}
