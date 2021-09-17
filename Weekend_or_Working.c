//To check whether a day is weekend or working day
#include <stdio.h>
int main()
{
    char str[100];
    printf("What is the day today?:-");
    scanf("%s",&str);

    if(str== 'Saturday' || str== 'Sunday')
    {printf("Today is a Weekend");}
    else if(str== 'Friday')
    {printf("Today is a working day");}


    return 0;
}
