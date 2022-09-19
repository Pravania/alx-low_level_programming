#include "main.h"
/**
 * _puts - prints string
 * @str: pointer
 * Return: always 0
 */

void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++
	}
	_putchar('\n');
}
