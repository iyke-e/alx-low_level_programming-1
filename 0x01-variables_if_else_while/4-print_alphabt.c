#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - the entry point
 *Descrition: print the alphabet in lowercase
 *and skip some letters
 *Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
