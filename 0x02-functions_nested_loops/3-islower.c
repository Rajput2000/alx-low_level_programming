#include "main.h"

/**
 * _islower - Check Description
 * @c: An input character
 * Description: function which checks if a char is lower
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
