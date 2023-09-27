#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns a natural sqrt
 * @n: integer
 * Return: integer valur
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate the natural sqrt
 * @n: integer
 * @i: iteration
 * Return: integer value
 */

int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
return (-1);

if (sqrt > n)
return (i);

return (_sqrt(n, i + 1));
}
