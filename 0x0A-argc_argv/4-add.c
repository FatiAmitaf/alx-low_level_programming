#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, l, s;
	char *p;

	if (argc < 2)
		printf("0\n");
	else
	{
		s = 0;
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			l = strlen(p);

			for (j = 0; j < l; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			s += atoi(argv[i]);
		}

	printf("%d\n", s);
	}
	return (0);
}
