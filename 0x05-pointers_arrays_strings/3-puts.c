#include "main.h"

/**
 * _puts - prints a string
 * @str: The printed string
 * Return: void
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
