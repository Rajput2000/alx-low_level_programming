#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prinme factor of the number
 * 612852475143
 *
 * Return: 0(success)
 */

int main(void)
{
	long int num = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(num); prime++)
	{
		/*int saved_prime;*/

		if (num % prime == 0)
		{
			num = num / prime;
			prime = 1;
		}
	}
	printf("%ld\n", num);
	return (0);
}
