#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to find the substring in
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located
 *	substring, or NULL if the substring isnt found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (*needle == '\0')
		return (haystack);

	for (k = 0; needle[k] != '\0'; k++)
		;
	k--;
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				if (j == k)
					return (haystack + (i - k));
				i++;
				j++;
			}
			else
				break;
		}
		i++;
	}
	return (NULL);
}
