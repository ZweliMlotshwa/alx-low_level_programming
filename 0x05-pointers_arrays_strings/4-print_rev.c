#include "main.h"
/**
 * print_rev -a function that prints  a string in reverse
 * @s: prints a string
 * return: void
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a--; a >= 0; a--)
	_putchar(s[a]);
	_putchar('\n');
}
