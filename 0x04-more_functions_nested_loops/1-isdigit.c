#include "main.h"

/**
 * _isdigit - checks for digit character
 * @c:The character to be checked
 *
 * Description - This function checks if a character is  digit
 * Return: 1 for digit character or 0 for anything else
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
