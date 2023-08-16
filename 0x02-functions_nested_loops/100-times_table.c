#include "main.h"

/**
 * print_times_table - Prints the times table of the input
 * Starting with 0.
 * @n: The value to be computed
 */

void print_times_table(int n)
{

int num, mult, prob;

if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prob = num * mult;
if (prob <= 99)
_putchar(' ');
if (prob <= 9)
_putchar(' ');
if (prob >= 100)
{
_putchar((prob / 100) + '0');
_putchar(((prob / 10)) % 10 + '0');
}
else if (prob <= 99 && prob >= 10)
{
_putchar((prob / 10) + '0');
}
_putchar((prob % 10) + '0');
}
_putchar('\n');
}
}
}

