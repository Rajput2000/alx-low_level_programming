#include <stdio.h>
#include main.h

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the unsigned int or 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		val = val << 1;
		val = val + b[i] - '0';
		i++;
	}
	return (val);
}
