#include <stdio.h>
int main()
{
    char input;
    scanf("%c",&input);

    if(input>= 65 && input<=90)
    {
        printf("Capital Letter");
    }
    else if(input>= 97 && input<=122)
    {
        printf("Small Letter");
    }
    else if(input>= 48 && input<=57)
    {
        printf("Num from 0-9");
    }
    else if(input=='!' || input=='@' || input=='#' || input=='_' || input=='$' || input=='.')
    {
        printf("Special Symbol");
    }
    else
    {
        printf("Invalid Character");
    }
    return 0;
}

