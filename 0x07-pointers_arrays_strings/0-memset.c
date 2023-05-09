#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies n bytes from memory area src,to area dest.
 *@dest: pointer to the memory area to copy to
 *@src: source area where n bytes copied
 *@n: number of bytes to copy
 *Return : A pointer to the destination buffer (dest)
 */
 char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; 
*(dest + i) = *(src + i);
return (dest);
}
