#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer to the string
 * @accept: the substring
 *
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l, n;

	i = 0;
	n = 0;

	for (k = 0; accept[k] != '\0'; k++)
		;
	while (s[i] != '\0')
	{
		j = 0;
		l = n + 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				n++;
			j++;
		}
		if ((j == k) && (l != n))
			return (n);
		i++;
	}
	return (n);
}
