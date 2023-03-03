#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 * @temp: "temp" to swap array elements
 * @i: to loop through the array from the beginning
 * @j: to loop through the array from the end
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
