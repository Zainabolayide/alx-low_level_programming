#include <stdio.h>

/**
 * main - print the single  digit with comma
 * Return: Always 0
 */
int main(void)

{
	int n;

	for (n = 48; n  < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);

	}
}

