#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The character buffer
 * @size: The number of bytes to print from the character buffer
 */
void print_buffer(char *b, int size)
{
	int idx, col;

	for (idx = 0; idx < size; idx += 10)
	{
		printf("%08x: ", idx);
		for (col = idx; col < idx + 10; col += 2)
		{
			if (col < size)
				printf("%02x", *(b + col));
			else
				printf("  ");

			if (col + 1 < size)
				printf("%02x", *(b + col + 1));
			else
				printf("  ");
			putchar(' ');
		}
		for (col = idx; col < idx + 10; col++)
		{
			if (col < size)
				putchar(*(b + col) < ' ' ? '.' : *(b + col));
			else
				putchar(' ');
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}