#include "main.h"
/**
 * _memset - memory with a
 * @s: source string
 * @b: the content byte for filling
 * @n: lenght of buffer
 * Return : new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
