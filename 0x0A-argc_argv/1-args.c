#include <stdio.h>
#include "main.h"

/**
 * main - number of arguments
 *@argc: numbeir of arguments
 *@argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char argv[])
{
	(void) argv;/*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
