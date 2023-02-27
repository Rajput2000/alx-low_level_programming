#include "main.h"
#include <string.h>

/**
 * rev_string - is the function
 * @s: is the variable
 * Return: sucees 0
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char rev;

	while (s[a] != '\0')
		a++;
	while (b < a--)
	{
		rev = s[b];
		s[b++] = s[a];
		s[a] = rev;
	}
}
