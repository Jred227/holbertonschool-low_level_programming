#include "main.h"
/**
 * _isalpha - alphabet
 * @c: int
 * Return: Always (0)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else if (c >= 'Z' && c <= 'Z')
{
	return (1);
}
else
{
return (0);
}
}
