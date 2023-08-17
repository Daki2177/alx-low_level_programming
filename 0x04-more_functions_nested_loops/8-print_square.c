#include "main.h"

/**
 * print_square - prints the square
 * @size: The number of squares
 * Return: empty
 */

void print_square(int size)
{
int x, y;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < 5; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
