#include "main.h"

/**
 * is_palindrome - is current value equal to the previous value
 * @s: string
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (help(i, s));
}
