#include "main.h"
/**
 *_islower - main entry
 *Description: checks for lowercase character
 *@c: character to compare
 *Return: always zero
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
