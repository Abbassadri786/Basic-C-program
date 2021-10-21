#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,count=0;
    char str[100],temp;
    
    scanf("%s",&str);
    
    while(str[count]!='\0')
    {
        count++;
    }
    for(i=0;i<=count;i++)
    {
        for(j=i+1;j<=count;j++)
        if(str[j]>str[i] )
           {
            temp=str[j];
            str[j]=str[i];
            str[i]=temp;
           }
    }
    printf("%s",str[i]);
    
}
