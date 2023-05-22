#include "main.h"
#include <string.h>

/**
 * _strlen -is the function
 * @s: is the variable
 * Return: success is 0
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
