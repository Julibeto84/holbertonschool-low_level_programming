#include "main.h"

/**
 * factorial - Takes a January number as input and returns a factorial.
 * @n: Number to get the factorial
 *
 * Return: Result of the factorial (int).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
