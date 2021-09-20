#include <stdio.h>
int main(){
   int i, num,t;

   printf("Enter number to print table: ");
   scanf("%d", &num);

   for(i=1; i<=10; i++){
        t=num*i;
      printf("%d * %d = %d\n", num, i, t);
   }
   return 0;
}
