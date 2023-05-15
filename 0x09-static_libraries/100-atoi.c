#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, e, z, len, t, digit;

	k = 0;
	e = 0;
	z = 0;
	len = 0;
	t = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && t == 0)
	{
		if (s[k] == '-')
			++e;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (e % 2)
				digit = -digit;
			z = z * 10 + digit;
			t = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			t = 0;
		}
		k++;
	}

	if (t == 0)
		return (0);

	return (z);
}
