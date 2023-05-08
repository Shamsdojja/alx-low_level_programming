#include "main.h"
  2 #include <stdio.h>
    3 /**
	  4 * _memcpy - function that copies n bytes from memory area src,to area dest.
	    5 *@dest: pointer to the memory area to copy to
	      6 *@src: source area where n bytes copied
	        7 *@n: number of bytes to copy
		  8 *Return : A pointer to the destination buffer (dest)
		    9 */
     10 char *_memcpy(char *dest, char *src, unsigned int n)
	 11 {
		  12         unsigned int i;
		   13
			    14         for (i = 0; i < n; i++)
			     15         *(dest + i) = *(src + i);
		    16         return (dest);
		     17 }
