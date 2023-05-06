#include "main.h"
/**
 * print_number - print an interger numbers
 * @n: number tested
 * Return: Always 0
 */
void print_number(int n)
{
	int k, a, digit, digits, power;
	unsigned int temp, numchar, number;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	k = 1;

	while (k < digits)
	{
		power = power * 10;
		k++;
	}
	a = power;
	while (a >= 1)
	{
		numchar = (temp / a) % 10;
		_putchar(numchar + '0');
		a = a / 10;
	}
}

