#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - the entry point
 *Descrition: print the alphabet in lowercase
 *in reverse
 *Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
