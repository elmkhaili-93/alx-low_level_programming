#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int k;

	k = (i % 10);

	if (i < 0)
	{
		k = (-1 * k);
	}

	_putchar(k + '0');
	return (k);
}
