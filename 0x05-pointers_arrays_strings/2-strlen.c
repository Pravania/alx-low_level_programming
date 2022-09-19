#include "main.h"

/**
 * _strlen - gets length f string
 * @s: length
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}
