/*
 * File- 0-putchar.c
 * Auth- Mojeed Azeez
*/

#include "main.h"
/**
 * main - prints "_putchar" followed by a new line.
 * return: Always 0.
*/
int main(void)

{
	char putcharstring[8]= "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(putcharstring[i]);
	_putchar('\n');


/*putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('a');
putchar('r');
putchar('\n');
*/

	return (0);
}
