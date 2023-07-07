#include "main.h"

int actual_prime_num(int n, int x);

/**
 * is_prime_number - if an intiger is a prime or not
 * @n: number to be examin
 *
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime_num(n, n - 1));
}

/**
 * actual_prime_num - calculate if a number is prime recursively
 * @n: number to be examined
 * @x: iterator
 *
 * Return: 1 if n is prime and 0 if not
 */

int actual_prime_num(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (actual_prime_num(n, x - 1));
}
