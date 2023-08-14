#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: number of argumentss
 * @argv: Array name
 * Return: Always 0 (Success)
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
