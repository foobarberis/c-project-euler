#include "f.h"

/* checks if a number is a prime number */
int is_prime(int n)
{
  int i;

  if (n == 2 || n == 3) {
    return 1;
  }

  if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
    return 0;
  }

  for (i = 5; (i * i) <= n; i = i + 6) {
    if ((n % i) == 0 || n % (i + 2) == 0) {
      return 0;
    }
  }
  return 1;
}

/* checks if n is a prime power. If it is, returns the prime which divides n, if not returns 0 */
int is_prime_power(int n)
{
  int i, x;

  i = 2;

  while (n % i != 0) {
    i = next_prime(i);
  }

  while (n != 1) {
    if ((n % i) == 0) {
      n = (n / i);
      x = x * i;
    } else {
      return 0;
    }
  }

  return i;
}

/* finds the next prime after n */
int next_prime(int n)
{
  int i;

  for (i = n + 1; i < 2 * n; ++i) {
    if (i % 2 != 0) {
      if (is_prime(i)) {
        n = i;
        return i;
      }
    }
  }
  return 0;
}

/* checks if a number is a palindrome */
int is_palindrome(int n)
{
  int digits, mid, i, j, k, pal, number;
  digits = mid = i = j = k = 0;
  number = n;
  pal = 0;

  /* all numbers n with 0 < n < 10 are palindromes and negative numbers cannot be palindromes */
  if (n < 0) {
    return 0;
  }

  if (n == 0) {
    return 1;
  }

  if ((n > 0) && (n < 10)) {
    return 1;
  }

  if (n == 10) {
    return 0;
  }

  /* counts the number of digits in the number and stores the number in an array */
  for (digits = 0; n != 0; digits++) {
    n = n / 10;
  }

  int num[digits];
  n = number;

  for (i = 0; n != 0; i++) {
    num[i] = n % 10;
    n = n / 10;
  }

  /* check if number is a palindrome */
  k = digits - 1;
  if ((digits % 2) == 0) {
    mid = digits / 2;

    if (num[0] != num[k]) {
      return 0;
    } else {
      pal = 1;
    }

    if (digits == 2 && num[0] == num[k]) {
      return 1;
    }

    while ((j <= mid) && (k >= mid) && (pal == 1)) {
      if (num[j] == num[k]) {
        pal = 1;
      } else {
        pal = 0;
      }
      j++;
      k--;
    }
    if (pal) {
      return 1;
    } else {
      return 0;
    }
  } else {
    mid = (digits - 1) / 2;

    if (num[0] != num[k]) {
      return 0;
    } else {
      pal = 1;
    }

    while ((j < mid) && (k > mid) && (pal == 1)) {
      if (num[j] == num[k]) {
        pal = 1;
      } else {
        pal = 0;
      }
      j++;
      k--;
    }
    if (pal) {
      return 1;
    } else {
      return 0;
    }
  }
}
