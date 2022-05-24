#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
