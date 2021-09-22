/*Two numbers are entered through the keyboard. Write a program to find the value of one number
raised to the power of another.*/

#include <stdio.h>
int main()
{
    int x,y,i;
    long long int power=1;

    printf("Enter the num:-");
    scanf("%d",&x);

    printf("To the power you want:-");
    scanf("%d",&y);

    for(i=0;i<y;i++)
    {
        power*=x;
    }
    printf("%lld\n",power);

    return 0;
}
