/**
* main - alphabet
* print_alphabet_x10 - print a - z ten times 
*/
#include <main.h>
void print_alphabet_x10(void)
{
char letter = 'a';
int count = 0;
while (count < 10)
{
int i;
for (i = 0; i < 26; i++)
{
putchar(letter + i);
}
putchar('\n');
count++;
}
}
