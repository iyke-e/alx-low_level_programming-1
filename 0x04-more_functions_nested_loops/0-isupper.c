#include "main.h"
/**
 *_isupper(int c) - the entry point
 *Description: checks for uppercase character
 *@c: letter to check
 *Return: always 0
 */
int _isupper(int c)
{
	if (c == 'A' || c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		return (0);
	}
}
