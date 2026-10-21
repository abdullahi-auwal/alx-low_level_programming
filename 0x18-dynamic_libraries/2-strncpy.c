#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to where to copy to
 * @src: string to copy
 * @n: number of characters to copy
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while ((j < n) && (dest[i] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
