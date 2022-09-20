#include "main.h"

/**
 * _strlen - write a function that returns the lenght of a string
 *@s: Character to get string.
 * Return: Returns length of string.
 **/

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	return (a);
}
