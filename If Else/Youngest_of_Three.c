#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the age of Ram:-");
    scanf("%d",&a);

    printf("Enter the age of Shyam:-");
    scanf("%d",&b);

    printf("Enter the age of Ajay:-");
    scanf("%d",&c);

    if(a<b && a<c)
    {
        printf("Ram is youngest of the three");
    }
    else if(b<a && b<c)
    {
        printf("Shyam is youngest of the three");
    }
    else
    {
        printf("Ajay is youngest of the three");
    }
    return 0;
}
