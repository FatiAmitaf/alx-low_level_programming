#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c, c1;
	int sign = n;
	char *ptr;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (sign >= l2)
	{
		sign = l2;
		ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (l1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (c = 0; c < l1; c++)
	{
		ptr[c] = s1[c];
	}
	for (c1 = 0; c1 < sign; c1++)
	{
		ptr[c++] = s2[c1];
	}
	ptr[c++] = '\0';
	return (ptr);
}
