#include "main.h"
/**
 * *cap_string - the entry point
 * Description: reverses the content of an array of integers.
 * @s: character pointer
 * Return: always 0
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_indexOf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && _indexOf(s[i - 1] || i == 0))
			s[i] = s[i] - 32;
	}
}
/**
 * _indexOf - returns boolean if special  character
 * @a: character to return
 * Return: true or false
 */
int _indexOf(char a)
{
	int i;

	char charArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
			    ')', '{', '}'};
	for (i = 0; i < 113; i++)
	{
		if (charArr[i] == a)
			return (1);
	}
	return (0);
}
