#include "main.h"

/**
 * print_sign print + positive, - negative, 0 zero
 *
 * @n: value for checking
 *
 * Return: int
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (1);
}
