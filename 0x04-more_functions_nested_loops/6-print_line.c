#include "main.h"

/**
 * print_line - draws a straight line 
 *
 * @n: number of times the character _  character
 * should be printed
*/
void print_line(int n)
{
int lnchr;
if (n <= 0)
_putchar('\n');
else
{
for (lnchr = 1; lnchr <= n; lnchr++)
_putchar('_');
_putchar('\n');
}
}
