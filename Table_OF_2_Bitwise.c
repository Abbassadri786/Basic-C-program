#include <stdio.h>
int main()
{
    int i=1;

    printf(" 2 X 1 =%d\n",i<<1);
    printf(" 2 X 2 =%d\n",i<<2);
    printf(" 2 X 3 =%d\n",(i<<1) + (i<<2));
    printf(" 2 X 4 =%d\n",(i<<3));
    printf(" 2 X 5 =%d\n",(i<<3)+(i<<1));
    printf(" 2 X 6 =%d\n",(i<<3) +(i<<2));
    printf(" 2 X 7 =%d\n",(i<<4) - (i<<1));
    printf(" 2 X 8 =%d\n",i<<4);
    printf(" 2 X 9 =%d\n",(i<<4) + (i<<1));
    printf(" 2 X 10 =%d\n",(i<<4) +(i<<2));

}
