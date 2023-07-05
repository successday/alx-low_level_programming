#include "main.h"

/**
 * is_prime_number - is the integer a prime number
 * @n: the number being tested
 *
 * Description: The function tests whether is a prime number
 * and returns the appropriate value.
 * Return: result
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, div));
}
