/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + 3^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,

(1 + 2 + 3 + ... + 10)^2 = 3025

Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/

#include <stdio.h>

#define LIMIT 100

int main(void)
{
  unsigned long x, y, z;
  x = y = z = 0;

  /* we compute x, the sum of the square from 1 to n using the formula ((n(n+1))(2n+1)) / 6 */
  x = ((LIMIT * (LIMIT + 1)) * ((2 * LIMIT) + 1)) / 6;

  /* we compute y, the sum of the integers from 1 to n using the formula (n(n+1)) / 2 */
  y = (LIMIT * (LIMIT + 1)) / 2;

  z = (y * y) - x;

  printf("x : %lu\ty : %lu\ty - x = %lu\n", x, y, z);

  return 0;
}
