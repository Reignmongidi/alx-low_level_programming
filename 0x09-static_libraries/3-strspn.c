#include "main.h"
/**
 * _strspn - gets the length of a function prefix substring
 * @s: Initial segment to be scanned
 * @accept: character to be found
 *
 * Return: number of characters in @s which consist of @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
