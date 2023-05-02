#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int k = 0;
	char *n = str;
	int o;

	while (*n != '\0')
	{
		n++;
		longi++;
	}
	k = longi - 1;
	for (o = 0 ; o <= k ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

