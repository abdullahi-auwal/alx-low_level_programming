#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the value
 * @index: the index
 *
 * Return: 1 if it worked,
 * or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
