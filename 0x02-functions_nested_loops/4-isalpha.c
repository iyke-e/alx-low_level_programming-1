#include "main.h"
/**
 *_isalpha - main entry
 *Description: checks for character
 *@c: character to compare
 *Return: always zero
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
