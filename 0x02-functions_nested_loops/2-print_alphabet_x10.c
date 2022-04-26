#include "main.h"
/**
 * print_alphabet_x10 - prints 10xalphabet in lowercase.
 *
 * Return: 0 Always.
 */
void print_alphabet_x10(void)
{
	char alph;
	int loop = 0;

	while (loop < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		loop++;
	}
}
