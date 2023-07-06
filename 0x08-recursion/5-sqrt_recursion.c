#include "main.h"

int actual_sqrt(int n, int x);

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to calculate square root
 *
 * Return: square root of the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - recurse to find natural number
 * @n: number ot calculate the square root
 * @x: iterator to be carried out
 *
 * Return: the resulting square root
 */

int actual_sqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (actual_sqrt(n, x + 1));
}
