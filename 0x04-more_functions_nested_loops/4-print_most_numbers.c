#include "main.h"

/**
 * print_most_numbers - prints most numbers 0-9 followed by new line
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
