#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @k: array name
 * @n: is the number of elements OF the array to be printed
 * Return: k and n inputs
 */
void print_array(int *k, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", k[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", k[n - 1]);
		}
			printf("\n");
}

