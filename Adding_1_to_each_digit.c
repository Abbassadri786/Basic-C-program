#include <stdio.h>
int main()
{
    int num,d1,d2,d3,d4,x,y,result;
    printf("Enter a 4 digit num:-");
    scanf("%d",&num);

   d1=num/1000;
   y=num%1000;
   d2=y/100;
   x=y%100;
   d3=x/10;
   d4=num%10;

    result=d4*1000 + d3*100 + d2*10 + d1;
    printf("\nReverse of a digit is = %d\n",result);
    return 0;
}

