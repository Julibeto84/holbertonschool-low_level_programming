#include "main.h"

/**
 *   _sqrt_recursion -  Calculates the square root of an integer "n"
 * @n: Number to find sqrt
 * @i: Possible sqrt
 * Return: i if is the exact sqrt, -1 in other case
 *
*/

int _sqrt_recursion(int n)
{
	/* Base case: */
	if (n == 0 || n == 1) {
		return n;
	}

	/* Recursive case: */
	int i;
	for (i = 1; i*i <= n; i++) {}

	i--;
	if (i*i == n) {
		return i;
	} else {
		return _sqrt_recursion(n - i - 1);
	}
}
