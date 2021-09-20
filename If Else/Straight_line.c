#include <stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("Enter the cordinates of points:-\n");
    scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3);

    if((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2))
    {
        printf("\nPoints lie in straight line\n");
    }
    else
    {
        printf("\nPoints do not lie on straight line\n");
    }
    return 0;
}
