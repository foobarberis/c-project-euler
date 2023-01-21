/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get
3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the
multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

#define LIMIT 1000

int main(void)
{
  int i;
  unsigned long long sum;

  sum = 0;

  for (i = 0; i < LIMIT; i++) {
    if ((i % 3) == 0 || (i % 5) == 0) {
      sum = sum + i;
    }
  }

  printf("%llu\n", sum);

  return 0;
}
