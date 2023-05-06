#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */

void print_buffer(char *b, int size)
{
	int j, a, k;

	j = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (j < size)
	{
		a = size - j < 10 ? size - j : 10;
		printf("%08x: ", j);
		for (k = 0; k < 10; k++)
		{
			if (k < a)
				printf("%02x", *(b + j + k));
			else
				printf("  ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < a; k++)
		{
			int c = *(b + j + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		j += 10;
	}
}

