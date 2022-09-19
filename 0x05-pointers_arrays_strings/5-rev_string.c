#include "main.h"
/**
 * rev_string - this characters in reverse.
 * @s: this is a parameter to change.
 */
void rev_string(char *s)
{
	int ini = 0, f = 0;
	char t;

	while (s[f] != 0)
		f++;
	f--;

	while (ini < f)
	{
		t = s[ini];
		s[ini] = s[f];
		s[f] = t;
		ini++;
		f--;
	}
}
