#include <stdio.h>
int main()
{
    char s,g;
    int age;
    printf("Enter Marital status Married:M  Unmarried:U :-");
    scanf("%c",&s);
    printf("Enter Age:-");
    scanf("%d",&age);
    printf("Enter Sex Male:m Female:f :-");
    scanf("%c",&g);

    if(((s=='U' || s=='M') && g=='m' && age>30) || ((s=='U' || s=='M') && g=='f' && age>25))
            {
               printf("Insurence will be provided");
            }
    else
        {
            printf("Insurence will not be provided");
        }
        return 0;
}
