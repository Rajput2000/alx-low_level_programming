#include "main.h"
#include <string.h>

/**
 * print_array - is then mai
 * @a: is the variable
 * @n: is the variabl
 * Return: suceess 0
 */

void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
