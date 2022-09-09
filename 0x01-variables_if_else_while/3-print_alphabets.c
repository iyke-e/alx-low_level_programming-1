#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - the entry point
 *Descrition: print the alphabet in lowercase
 *and lowercase
 *Return: always 0
 */
int main(void)
{
	char letter;
	char lett;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (lett = 'A'; lett <= 'Z'; lett++)
		putchar(lett);
	putchar('\n');
	return (0);
}
