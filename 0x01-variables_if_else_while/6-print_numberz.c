#include <stdio.h>
/**
 *In main - print single digit no.
 *of base 10 from 0 - \n
 *value remains char but datatype convert to int as defined
 *Return: 0 (Success)
 */
int main()
{ 
	
	int i;
	for(i='0'; i<='9'; i++) 
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}


