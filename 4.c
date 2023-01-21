/*
A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

/*
This program computes the product of all pairs of numbers with at most (N-1)
digits and checks if the result is a palindromic number. It then prints the
biggest palindromic number found.
*/

#include "f.h"
#include <stdio.h>

#define LIMIT 10000

int main(void)
{
  int a, b, i, j, x, y;
  a = b = x = y = 0;
  i = 1;

  while (i < LIMIT) {
    while (j < LIMIT) {
      x = i * j;
      if (is_palindrome(x)) {
        /* printf("%d * %d = %d\n", i, j, x); */
        if (x > y) {
          y = x;
          a = i;
          b = j;
        }
      }
      j++;
    }
    i++;
    j = i;
  }
  printf("%d * %d = %d\n", a, b, y);

  return 0;
}
