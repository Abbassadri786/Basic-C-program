#include <stdio.h>
int main()
{
    int a,b;
    char opr;

    printf("Enter 2 numbers to apply operation:-\n");
    scanf("%d%d",&a,&b);

    printf("\nOperation:-\n");
    scanf("%c",&opr);

     switch(opr)
    {
    case '+' :
    printf("A + B=%d",a+b);
    break;

    case '-':
    printf("A - B=%d",a-b);
    break;

    case '*':
    printf("A X B =%d",a*b);
    break;

    case '/':
    printf("A / B =%d",a/b);
    break;

    default:
    printf("Operation incorrect!");
    break;
    }

    return 0;
}
