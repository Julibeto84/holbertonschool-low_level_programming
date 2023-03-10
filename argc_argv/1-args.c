#include <stdio.h>
/**
 * main - display num of arg
 * @argc:int
 * @argv:string
 * Return:always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);
}
