/*
 * File: 6-print_numberz.c
 * Auth: Abrham H Daniel
 */
#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from ,
 * only using putchar and without char variables.
 * Return: Always .
 */
int main(*void)
{
	int num;
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
