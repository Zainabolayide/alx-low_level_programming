#include <stdio.h>

/**
 * main - print the numbers in base 16
 * Return: Always 0
 */
int main(void)

{
	int num;
	char le;

	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');

	for (le = 'a'; le <= 'f'; le++)

	putchar(le);

	putchar('\n');

	return (0);
}
