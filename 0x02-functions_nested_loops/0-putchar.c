/*
 * File- 0-putchar.c
 * Auth- Mojeed Azeez
 * main - prints stdout
 * returns : always 0
*/

#include "main.h"
/**
 * Main.h - prints 'putcharstring[i]' followed by a new line.
 * Return: Always 0 (success).
 * main.h - newly created header function
*/
int main(void)

{
char putcharstring[8] = "_putchar"
for (i = 0; i < 8; i++)
_putchar(putcharstring[i]);
_putchar('\n');

return (0);
}
