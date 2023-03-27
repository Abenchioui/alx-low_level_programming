#include "main.h"
/**
 * swap_int - function that swaps the value of
 * two integers.
 * @a: integer to swap
 * @b: integer to swap
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
