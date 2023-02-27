#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password
 *
 * Return: suceess 0
 */

int main(void)
{
	int a, b, c, s;
	char e[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char f[58];

	srand(time(NULL));
	while (s != 2772)
	{
		a = c = s = 0;
		while ((2772 - 122) > s)
		{
			b = rand() % 62;
			f[a] = e[b];
			s += e[b];
			a++;
		}
		while (e[c])
		{
			if (e[c] == (2772 - s))
			{
				f[a] = e[c];
				s += e[c];
				a++;
				break;
			}
			c++;
		}
	}
	f[a] = '\0';
	printf("%s", f);
	return (0);
}
