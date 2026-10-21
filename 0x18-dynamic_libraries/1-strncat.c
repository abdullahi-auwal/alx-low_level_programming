#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: one of the string
 * @src: the other string
 * @n: the number of bytes to used at most from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (j < n)
		dest[i] = '\0';
	return (dest);
}
