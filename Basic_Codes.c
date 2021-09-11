#include <stdio.h>
int main()
{
    printf("Hello");
}

//using escape sequence
#include <stdio.h>
int main()
{
    printf(" \"Hello\"\n");
}

//Addition of two numbers
#include <stdio.h>
int main()
{
   float a,b;
   printf("Enter 2 numbers:-");
   scanf("%f %f",&a,&b);

   printf("\nSum of 2 numbers=%0.1f\n",a+b);
}

//calculating Simple intrest
#include<stdio.h>
int main()
{
float P,R,T,SI;
printf("Enter P,R,T:- ");
scanf("%f %f %f",&P,&R,&T);
SI = (P*R*T)/100;

printf("\n Simple Interest is : %0.1f\n", SI);
return 0;
}


