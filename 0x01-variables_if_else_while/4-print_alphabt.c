#include <stdio.h>

/**
 * main - print in lower case except for q and e
 * Return: Always 0
 */
int main(void)
{

	char la;

	for (la = 'a'; la <= 'z'; la++)
{
	if (la != 'e' && la != 'q')
		putchar(la);
}
putchar('\n');

return (0);
}
