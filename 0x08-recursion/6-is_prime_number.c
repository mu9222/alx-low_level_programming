#include "main.h"


int _prime(int n, int i);


/**
 * is_prime_number - function that returns 1 if n is prime, 0 in not .
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}



/**
 * _prime - function that returns 1 if n is prime number and 0 otherwise.
 * @n: number
 * @i: iterative
 * Return: 1 or 0
 */

int _prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (_prime(n, i - 1));
}
