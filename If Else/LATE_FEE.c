#include <stdio.h>

int main()
{
    int num,fees=0;
    
    printf("Enter the mins student is late:-\n");
    scanf("%d",&num);
    
    if(num>0 && num<=3)
    {
        fees=num*100;
        printf("Late fee=%d",fees);
    }
    else if(num>=4 && num<=7)
    {
        fees=300+(num-3)*150;
        printf("Late fee=%d",fees);
    }
    else if(num>=8 && num<=10)
    {
        fees=900+(num-7)*250;
        printf("Late fee=%d",fees);
    }
    else if(num>=11)
    {
        fees=1650+(num-10)*500;
        printf("Late fee=%d",fees);
    }
    else
    {
        printf("Student is Absent ");
    }
    

    return 0;
}
