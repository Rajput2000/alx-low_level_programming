#include "main.h"
#include <string.h>

/**
 * puts2 - is the function
 * @str: is the variable
 * Return: 0 success
 */

void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a] != '\0')
		a++;
	a -= 1;
	for (; b <= a; b += 2)
		_putchar(str[b]);
	_putchar('\n');
}

