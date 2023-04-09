#include "main.h"
#include <string.h>

/**
 * _puts -is the function
 * @str: is the variabl
 * Return: success is 0
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
