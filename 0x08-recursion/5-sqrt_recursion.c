#include "main.h"

/**
 * _sqrt - finds the square root of a value
 * @prev: previous value
 * @root: the square value
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
