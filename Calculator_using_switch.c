#include <stdio.h>
int main()
{
    int a,b,opr;

    printf("Enter 2 numbers to apply operation:-\n");
    scanf("%d%d",&a,&b);

    printf("\nOperation:-\n");
    scanf("%d",&opr);

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
    printf("This operation is not applicable");
    break;
    }

    return 0;
}
