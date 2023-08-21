#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: Second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*The funtion swaps two integers*/
{
int temp = *a;
*a = *b;
*b = temp;
}
