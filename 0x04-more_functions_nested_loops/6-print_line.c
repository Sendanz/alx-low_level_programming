#include "main.h"

/****
 * print_line - print a line of underscores
 * @n: No of timesi
 *
 * Description: This function draws a straight line of underscores.
 *		If i is 0 or less, it only prints a newline character.
 * Return: Always 0
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
