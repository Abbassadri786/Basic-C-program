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

//Average of 5 subjects
#include<stdio.h>
int main()
{
float Maths,Hindi,English,Evs,Science,Avg;
printf("Enter marks for 5 subjects:-");
scanf("%f%f%f%f%f",&Maths,&Hindi,&English,&Evs,&Science);

Avg=(Maths+Hindi+English+Evs+Science)/5;
printf("\nAvg marks of 5 subjects=%0.1f\n",Avg);

return 0;
}



