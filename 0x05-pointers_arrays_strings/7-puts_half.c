#include "main.h"
#include <string.h>

/**
 * puts_half - is the main
 * @str: is the variable
 * Return: success 0
 */

void puts_half(char *str)
{
	int a = 0, b, c;

	while (str[a] != '\0')
		a++;
	if (a % 2 == 0)
		c = a / 2;
	else
		c = (a + 1) / 2;
	for (b = c; b < a; b++)
		_putchar(str[b]);
	_putchar('\n');
}
