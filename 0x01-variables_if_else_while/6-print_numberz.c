#include <stdio.h>
/**
 * main - Entry point
 * Description: print 0-9 using putcher while using int variable
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}


