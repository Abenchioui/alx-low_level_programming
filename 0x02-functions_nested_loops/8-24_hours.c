#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: on success 1
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if ((a == 2) && (b > 3))
					{
						break;
					}
					_putchar(a % 10 + '0');
					_putchar(b % 10 + '0');
					_putchar(58);
					_putchar(c % 10 + '0');
					_putchar(d % 10 + '0');
					_putchar(10);
				}
			}
		}
	}
}
