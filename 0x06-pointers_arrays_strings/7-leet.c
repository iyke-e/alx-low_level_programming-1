#include "main.h"
/**
 * *leet - the entry point
 * Description: function that encodes a string into 1337.
 * @s: character pointer
 * Return: always 0
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (letters[j] == s[i])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}
