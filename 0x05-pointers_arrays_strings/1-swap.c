#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: the first integer variable to swap
 * @b: the second integer variable to swap
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}

