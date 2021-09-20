#include <stdio.h>

int main()
{
    int i, n;
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\t", i);
        }
    }
    printf("\nPrint Even numbers till: ");
    scanf("%d", &n);

    printf("All Even numbers from 1 to %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\t", i);
        }
    }
   printf("\n");

    return 0;
}
