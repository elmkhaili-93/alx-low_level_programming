#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return : always 0
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
