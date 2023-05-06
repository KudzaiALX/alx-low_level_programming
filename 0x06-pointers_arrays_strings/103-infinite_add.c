#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int k = 0;
	int a = 0;
	char temp;

	while (*(n + k) != '\0')
	{
		k++;
	}
	k--;

	for (a = 0; a < k; a++, k--)
	{
		temp = *(n + a);
		*(n + a) = *(n + k);
		*(n + k) = temp;
	}
}

/**
 * infinite_add - add two numbers together
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that the function use to keep the result
 * @size_r: buffer size
 * Return: pointer to destination
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, k = 0, a = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + k) != '\0')
		k++;
	while (*(n2 + a) != '\0')
		a++;
	k--;
	a--;
	if (a >= size_r || k >= size_r)
		return (0);
	while (a >= 0 || k >= 0 || overflow == 1)
	{
		if (k < 0)
			val1 = 0;
		else
			val1 = *(n1 + k) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + a) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		a--;
		k--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

