#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the value
 * @index: the index
 *
 * Return: value at index,
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int r;
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1;
	n = n >> index;
	r = n & mask;
	return (r);
}
