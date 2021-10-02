#include <stdio.h>
int main()
{
    int i,avg,num,count=0;
    float Avg,sum=0;
    printf("Enter the number of element you want:-\n");
    scanf("%d",&num);
    
    int arr[num];
    scanf("%d",&arr);
    
    for(i=1;i<=num;i++)
    {
        sum += arr[i];
    }
    Avg=sum/(num);
    printf("Sum of All numbers%.2f \n",sum);
    
    printf("Average of All numbers = %0.2f",Avg);
    
    return 0;
}
