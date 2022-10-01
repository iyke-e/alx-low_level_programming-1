#include "main.h"
/**
 * _isupper - the entry point
 *
 * Description: checks for uppercase character
 *
 * @c: letter to check
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
