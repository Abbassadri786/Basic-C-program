#include <stdio.h>

int main()
{
    char str[100],i,j,R;
    int freq;
    scanf("%s",str);
    
    for(i='A';i<='z';i++)
    {
        freq=0;
        for(j=0;str[j]!='\o';j++)
        {
            if(i==str[j])
            R=str[j];
            freq++;
            
        }
        printf("Frequency of %c is %d ",R,freq);
    }
    
    

    return 0;
}
