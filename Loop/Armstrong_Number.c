#include<stdio.h>

int main()
{
    int num, temp, rem=0, sum=0, i;
    int cube;
    
    printf("Enter your number to check whether Armstrong or not:-");
    scanf("%d",&num);
    
    temp = num;
    
    for(i=1;i<=500;i++)
    {
        while(num!=0)
        {
            rem = num%10;
            cube = rem*rem*rem; 
            sum = sum + cube;
            num = num/10;
        }   
        if(sum == temp)
            printf("%d\n",sum);
    }

}
