#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
*/
void print_rev(char *s)
{
int len = strlen(s) - 1;
for (; len >= 0; len = len - 1)
{
  _putchar(*(s + len));
}
 _putchar("\n");
}
