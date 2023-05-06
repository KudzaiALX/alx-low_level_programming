#include "main.h"
/**
 * leet - encode into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int k, a;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (a = 0; a < 10; a++)
		{
			if (n[k] == s1[a])
			{
				n[k] = s2[a];
			}
		}
	}
	return (n);
}

