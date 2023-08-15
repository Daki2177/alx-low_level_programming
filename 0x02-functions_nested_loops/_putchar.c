#include <unistd.h>

/**
 * _putchar - writes the chracter of c to stdout
 * @c: The character to print
 * Return: returns 0
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{

return (write(1, &c, 1));

}
