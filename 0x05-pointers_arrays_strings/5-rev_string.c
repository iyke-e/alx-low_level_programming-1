#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - the entry point
 *
 * Description: prints a string in reverse
 *
 * @s: pointer string
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	/**
	 * the pointer is being passed but in the main,
	 * the string is given as an array
	 */
	int i;
	int temp;
	int size = _strlen(s) - 1;

	for (i = 0; i < size; i++)
	{
		/**
		 * creating a temporary variable to store each value of
		 * the string at a time
		 */
		temp = s[i];
		/**
		 * replacing the first value with the last value,
		 * 2nd with 2nd to the last and so on
		 */
		s[i] = s[size];
		/**
		 * the temporary variable is replaced with the value
		 * from behind and printed out
		 */
		s[size] = temp;
		/* decrement the size to get the next value */
		size--;
	}
}
