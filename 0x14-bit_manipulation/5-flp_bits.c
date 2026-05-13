#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to get from one number to another
 * @n: first number
 * @m: the other number
 *
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p = 0;
	unsigned int sum = 0;

	p = m ^ n;
	while (p != 0)
	{
		sum += (p & 1);
		p = p >> 1;
	}
	return (sum);
}
