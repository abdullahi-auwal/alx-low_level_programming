#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int c = 0;

	c = n & 1;
	n = n >> 1;
	if (n != 0)
		print_binary(n);
	_putchar(c + '0');
}
