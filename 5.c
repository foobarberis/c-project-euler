/*
** 2520 is the smallest number that can be divided by each of the numbers
** from 1 to 10 without any remainder.
**
** What is the smallest positive number that is evenly divisible by all
** of the numbers from 1 to 20 ?
*/

#include "f.h"
#include <stdio.h>

#define LIMIT 20

int main(void)
{
  int i;
  unsigned long x;
  x = 1;

  for (i = 1; i <= LIMIT; i++) {
    printf("%d\t%lu\n", i, x);
    if (is_prime(i + 1)) {
      x = x * (i + 1);
    } else if (is_prime_power(i + 1) != 0) {
      x = x * is_prime_power(i + 1);
    }
  }

  return 0;
}
