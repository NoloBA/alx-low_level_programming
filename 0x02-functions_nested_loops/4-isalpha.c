#include "main.h"
/**
 * _isalpha - check alphabetic character
 * @c: ascii character tested
 *
 * Return: 1 (if alpha)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
