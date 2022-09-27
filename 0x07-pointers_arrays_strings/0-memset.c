#include "main.h"
/**
 * memset - fills memory
 * @s: pointer to memory to fill
 * @c: character to fille memory with
 * @n: number of bytes
 * Return: pointer to filled memory @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
