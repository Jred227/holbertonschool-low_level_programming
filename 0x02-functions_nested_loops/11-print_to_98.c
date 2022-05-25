#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing numbers
 * @n:
 * Return: Always (0)
 */
void print_to_98(int n)
{
	if (n < 98)
		while (n < 97)
		{
			n++;
			printf("%d, ", n);
		}
	else if (n > 98)
		while (n > 98)
		{
			n--;
			printf("%d, ", n);
		}
	else
	{
		printf("98\n");
	}
}
