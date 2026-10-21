#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string to a buffer
 * @dest: the pointer to the buffer
 * @src: the pointer to the string
 *
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;
	int i = 0;

	while (*(src + i) != '\0')
		i++;
	j = 0;
	while (i >= 0)
	{
		dest[j] = *(src + j);
		j++;
		i--;
	}
	dest[j] = '\0';
	return (dest);
}
