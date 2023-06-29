#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src,
 * including the terminating null byte,
 * to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2] ; c2++)
dest[c++] = src[c2];
return (dest);
}
