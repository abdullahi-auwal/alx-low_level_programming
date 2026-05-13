#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *	b is NULL or, one or more chars isnt 0/1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int exp = 0;
	int n = 0;
	int dec = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	i--;
	while ((b[i] != '\0') && (i >= 0))
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		n = b[i] - '0';
		dec += (n * exponent(exp));
		exp++;
		i--;
	}
	return (dec);
}

/**
 * exponent - finds the power of a base
 * @exp - the rest power
 *
 * Return: the power
 */
int exponent(int exp)
{
	int i;
	int base = 2;
	int result = 1;

	for (i = 0; i < exp; i++)
	{
		result *= base;
	}
	return (result);
}
