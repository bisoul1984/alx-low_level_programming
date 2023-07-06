#include "main.h"

/**
 * is_prime_number - if an integer is prime or not
 * @n: number to be examin
 *
 * Return: 1 if n is a prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prim_num(n, n - 1));
}

/**
 * acual_prim_num - calculate if a num is prime recursively
 * @n: number to examin
 * @x: iterator to be carried out
 *
 * Return: 1 if n is prime and 0 if not
 */

int actual_prim_num(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (actual_prim_num(n, n - 1));
}
