#include<stdio.h>
int main()
{
float Basic_salary,Gross_Salary;
printf("Enter the Basic Salary:- ");
scanf("%f",&Basic_salary);

Gross_Salary= Basic_salary + 0.6*Basic_salary;
printf("Gross salary = %0.1f \n",Gross_Salary);

return 0;
}
