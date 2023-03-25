#include "main.h"
/**
 * _islower - entry point
 * @c : parameter to be printed
 * Return: if c is lowercase
 * otherwise : return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
