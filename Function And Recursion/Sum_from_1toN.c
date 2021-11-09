#include<stdio.h>

int sumPrint(int n)
{
    int res;
    if(n==1)
    {
         return 1;
    }
    else{
        res= n+sumPrint(n-1);
        return res;
    }
}
int main()
{
    int n;
    int sum;
    scanf("%d",&n);
	printf("\n\n Recursion : Print Sum of num from 1 to n :\n");
	printf(" The Sum of natural numbers are :");
	
    sum=sumPrint(n);
    printf("%d",sum);
    return 0;
}
