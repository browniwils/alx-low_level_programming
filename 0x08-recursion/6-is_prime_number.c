#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - test a number if its a prime
 * @n: integer to test for prime number
 * Return: 1 if @n is a prime number otherwise 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2, n / 2));
}

/**
 * prime - helps is_prime_number function
 * @n: testing integer
 * @i: recursion integer increment
 * @limit: when recursion to stop
 * Return: 0
 */

int prime(int n, int i, int limit)
{
	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
	{
		return (0);
	}
	else if (n % i != 0 && i <= limit)
	{
		return (prime(n, i + 1, limit));
	}

	return (1);
}
