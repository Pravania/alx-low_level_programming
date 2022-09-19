#include "main.h"
/**
 * _strcpy - copy the pointer to variable.
 * @src: the origin pointer.
 * @dest: the destiny pointer.
 * Return: d.
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
