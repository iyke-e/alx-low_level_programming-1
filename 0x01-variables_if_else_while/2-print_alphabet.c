#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - the entry point
 *Descrition: print the alphabet in lowercase
 *
 *Return: always 0
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}
