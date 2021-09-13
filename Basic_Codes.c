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
// Area of rectangle & Circle

#include<stdio.h>
int main()
{
float A_circle,A_Rectangle,r,l,b;

printf("Enter radius of circle:-");
scanf("%f",&r);
A_circle= 3.14*r*r;
printf("Area of circle=%0.1f\n",A_circle);

printf("Enter Lenght & Breadth for rectangle:-");
scanf("%f %f",&l,&b);
A_Rectangle= l*b;
printf("Area of Rectangle=%0.1f\n",A_Rectangle);

return 0;
}
// Farehnite to celsius 

#include <stdio.h>
int main()
{
    float cel,fah;
    printf("Enter the temp in farhenite-");
    scanf("%f",&fah);

    cel=(fah-32)*0.55;
    printf("\nTemp in Celsius=%0.2f\n",cel);

    return 0;
}



