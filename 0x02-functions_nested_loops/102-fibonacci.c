#include <stdio.h>

/**
 * main - main block
 * Description: print the first 50 fibonacci numbers
 * starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, c;

	while (i < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
