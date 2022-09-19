#include "main.h"

/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: length
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char l = s[0];

	while (l != '\0')
	{
		sum++;
		l = s[i++];
	}
	return (sum);
}
