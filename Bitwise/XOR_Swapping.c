//with 2 variables

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 num Before Swapping:-");
    scanf("%d%d",&a,&b);

    a=a^b;
    b=b^a;
    a=a^b;

    printf("After Swapping=%d %d",a,b);
    return 0;

}

//with 3 variables

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 num Before Swapping:-");
    scanf("%d%d",&a,&b);

    c=a^b;
    b=c^b;
    a=c^a;


    printf("After Swapping=%d %d",a,b);
    return 0;

}
