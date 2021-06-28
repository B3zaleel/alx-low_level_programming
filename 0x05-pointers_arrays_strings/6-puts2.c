#include "holberton.h"

/**
 * puts2 - Reverses a string
 * @s: The string whose other characters are to be printed
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (*(str + length) != '\0')
	{
		if (length % 2 == 0)
			_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
