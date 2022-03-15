#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lowercase.
 *
 * Return: Always .
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
