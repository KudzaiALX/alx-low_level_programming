#include "main.h"
/**
 * _strcat - concatenates two strings
 *@dest: first string
 *@src: second string
 *
 *Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int a;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[k] = src[a];
		k++;
		a++;
	}

	dest[k] = '\0';
	return (dest);
}

