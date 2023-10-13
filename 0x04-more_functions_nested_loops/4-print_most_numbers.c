#include "main.h"

/**
 * print_most_numbers - prints 01356789
 * Description: This function prints numbers between 0 and 9 other than 2 and 4
 * Return: void
 */

void print_most_numbers(void)

{

char c;
for (c = '0'; c <= '9'; c++)

{

if (!(c == '2' || c == '4'))
_putchar(c);

}

_putchar('\n');

}

