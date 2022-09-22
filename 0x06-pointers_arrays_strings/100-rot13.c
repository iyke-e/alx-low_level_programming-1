#include "main.h"
/**
 * *rot13 - the entry point
 * Description: function that encodes a string using rot13
 * @s: character pointer
 * Return: always 0
 */
char *rot13(char *s)
{
	int i, j;
	char letter[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (0);
}
