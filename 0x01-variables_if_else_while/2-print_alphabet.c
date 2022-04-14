#include <stdio.h>

/**
*main - Entry point
*print lowercase alph + newline
*Return: Always 0 (Success)
*/
int main(void)
{
char character;
for (character = 'a' ; character <= 'z' ; character++)
{
putchar(character);
}
putchar('\n');
return (0);
}
