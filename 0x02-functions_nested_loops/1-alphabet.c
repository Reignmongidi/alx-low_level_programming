#include "main.h"
/*
 * printalphabet: prints alphabets in lowercase
 * return: void
 *
 */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z' ; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
}
