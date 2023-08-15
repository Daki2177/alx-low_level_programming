#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @n: The character to be checked
 * Return:  1 for alphabetic character and 0 for anything else
 */

int _isalpha(int n)
{
if ((n >= 65 && n <= 99) || (n >= 97 && n <= 122))
{
return (1);
}
return (0);

}
