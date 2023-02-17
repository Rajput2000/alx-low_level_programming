#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - a program that prints the alphabets in lower case
 *
 * Return: 0(Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	return (0);
}
