#include <stdio.h>
/**
 * main - Entry point
 * Description: write a program that prints all possible
 * diffirent combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDigit = 0, seconDigit;
while (firstDigit <= 99)
{
seconDigit = firstDigit;
while (firstDigit <= 99)
{
if (seconDigit != firstDigit)
{
putchar((firstDigit / 10) + 48);
putchar((firstDigit % 10) + 48);
putchar(' ');
putchar((firstDigit / 10) + 48);
putchar((seconDigit % 10) + 48);
if (firstDigit != 98 || seconDigit != 99)
{
putchar(',');
putchar(' ');
}
}
seconDigit++;
}
firstDigit++;
}
putchar('\n');
return (0);
}

