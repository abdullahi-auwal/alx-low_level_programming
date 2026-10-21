#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination mem area
 * @src: pointer to the mem area to copy
 * @n: number of bytes to copy
 *
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
