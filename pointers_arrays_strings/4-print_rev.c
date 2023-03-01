#include "main.h"
#include <string.h>
/**
* _strlen - returns the length of a string.
* @s: Pointer to string to measure
* Return: Lenght of the string
*/
void print_rev(char *s)
{
int len = strlen(s);
for (int i = len - 1; i >= 0; i--)
{
_putchar("%c", s[i]);
}
_putchar("\n");
}
