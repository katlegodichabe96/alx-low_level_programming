#include "main.h"
/**
 * _mecpy - a function that copies memory area
 * @dest: memory where is stored
 * *@n: number of bytes
 *
 * Return: copies memory with n byted chaned
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
