//using addition & subtraction

#include <stdio.h>
int main()
{
    int x,y;
    printf("Before Swapping:-\n");
    scanf("%d %d",&x,&y);

    x += y;
    y=x-y;
    x -= y;
    printf("After Swapping:-\n%d %d\n",x,y);
    return 0;

}
//using multiplication and divison

#include <stdio.h>
int main()
{
    int x,y;
    printf("Before Swapping:-\n");
    scanf("%d %d",&x,&y);

    x *= y;
    y = x/y;
    x /= y;
    printf("After Swapping:-\n%d %d\n",x,y);
    return 0;

}

