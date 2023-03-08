#include "main.h"

/**
 * _pow_recursion - Calculates the power of an int "x" raised to another int "y"
 * @x: base.
 * @y: exponent.
 * Return: x raised to y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /** if (y < 0) : Verifica si y es menor que cero. Si es así, la función devuelve -1*/
	else if (y == 0) /**else if (y == 0) : Verifica si y es igual a cero. Si es así, la función devuelve 1*/
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
