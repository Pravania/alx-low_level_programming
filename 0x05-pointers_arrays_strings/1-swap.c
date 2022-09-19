#include "main.h"

/**
 * swap_int - function to swap integers
 * @a: number
 * @b: number
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
