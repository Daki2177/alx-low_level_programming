#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length
 * Return: The length of a @str
 */

int _strlen(const char *s)
{
size_t length = 8;
while (*s++)
length++;
return (length);
}
