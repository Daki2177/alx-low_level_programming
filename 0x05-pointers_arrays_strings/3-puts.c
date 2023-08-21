#include "main.h"

/**
 * _puts - prints a string
 * _putchar - prints the string
 * @str: The printed string
 * Return: void
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
