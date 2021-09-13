#include <stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5,result;
    printf("Enter a 5 digit num:-");
    scanf("%d",&num);

    d5= num%10;
    num=num/10;
    d4= num%10;
    num= num/10;
    d3= num%10;
    num= num/10;
    d2= num%10;
    d1= num/10;

    result= (d1+1)*10000 + (d2+1)*1000 + (d3+1)*100 + (d4+1)*10 + d5+1;
    printf("\nNew num after adding 1 is = %d\n",result);
    return 0;
}
