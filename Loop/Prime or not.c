#include <stdio.h>
#include <math.h>

int main() {
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= sqrt(n); ++i) {
    // condition for non-prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    printf("%d is a Prime Number.");
  } 
 
    else
      printf("%d is not a prime number.", n);
  }

