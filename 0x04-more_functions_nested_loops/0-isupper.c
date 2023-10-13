#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c:The character to be checked
 *
 * Description - This function checks if a character is an  uppercase letter
 * Return: 1 for uppercase character or 0 for anything else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
