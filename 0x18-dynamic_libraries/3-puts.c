#include "main.h"

/**
 * _puts - prints a string
 * @str:the string
 */
void _puts(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(j = s[i]);
	}
	_putchar('\n');
}
