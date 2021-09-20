#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x1, y1;

    printf("Enter the co-ordinates of the point: ");
    scanf("%d %d", &x1, &y1);

    if(x1==0)
    {
        printf("Point lies on Y Axis");
    }
    else if(y1==0)
    {
        printf("Point lies on X Axis");
    }
    else
    {
        printf("Point lies somewhere on X & Y plane");
    }
    return 0;
}
