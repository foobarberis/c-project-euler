/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that
the 6th prime is 13.

What is the 10 001st prime number?
*/

#include "f.h"
#include <stdio.h>

#define LIMIT 10001

int main(void)
{
  int i, p;

  i = 0;
  p = 1;

  while (i != LIMIT) {
    p++;
    if (is_prime(p)) {
      i++;
    }
  }

  printf("%dth prime is %d\n", i, p);
  return 0;
}
