#include <stdio.h>
/**
 * main - Entry point
 * Description: print 0-9 using putcher while using int variable
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}

