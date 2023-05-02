#include "main.h"
/**
 * print_rev - function that print a string in reverse followd by anew line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int k;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (k = longi; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

