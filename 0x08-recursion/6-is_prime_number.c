#include "main.h"

/**
 * is_divisible - tests whether the number is divisible
 * @n: the number being tested
 * @div: the divisor
 *
 * Description: The function finds whether the number is divisible
 * by 2 and return the value
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
