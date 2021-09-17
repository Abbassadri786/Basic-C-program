#include <stdio.h>
int main()
{
    float S1,S2,S3,S4,S5,percent;
    printf("Enter marks of 5 Subjects:-\n");
    scanf("%f%f%f%f%f",&S1,&S2,&S3,&S4,&S5);

    percent=(S1+S2+S3+S4+S5)/5.00;
    printf("\nTotal Percentage=%0.2f\n",percent);

     if(percent >= 50)
      {printf("Pass\n");}
     else
        {printf("Fail\n");}

      return 0;
}
