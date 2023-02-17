#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints alphabelt in lower and upper cases
 *
 * Return: 0(Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
