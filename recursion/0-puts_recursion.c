#include "main.h"

/**
 *  *_puts_recursion - prints a string, followed by a new line.
 *   *@s: String to print
 *
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')// Print a new line character
	{
		putchar('\n'); // Print a new line character
		return;
	}
	putchar(*s);       // Print the current character
	_puts_recursion(s+1); // Recursive call with next character
}
