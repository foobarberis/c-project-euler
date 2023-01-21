/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include "f.h"
#include <stdio.h>

#define N 600851475143

int main(void)
{
  int p;
  unsigned long n, x;

  n = N;
  p = 2;
  x = 1;

  /* trial division */
  while (n != 1) {
    if ((n % p) == 0) {
      n = (n / p);
      printf("%d ", p);
      x = x * p;
    } else {
      p = next_prime(p);
    }
  }
  printf("\n%lu\n", x);

  return 0;
}
