#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times the numbers
 *                    can only use _putchar three times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
int row, count;
for (row = 0; row <= 10; row++)
{
for (count = 0; count <= 15; count++)
{
if (count >= 10)
_putchar(count / 10 + 48);
_putchar(count % 10 + 48);
}
-putchar('\n');
}
}
