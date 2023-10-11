#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet x10 times
 * Description - This function prints the English alphabet 10 times, separated by a newline character
 * Return: void
 */
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}

}

