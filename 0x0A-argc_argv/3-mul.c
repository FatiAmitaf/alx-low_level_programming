#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program that multiplies two numbers
 * @argc: number of argumentss
 * @argv: Array name
 * Return:  0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = 1;
for (i = 1; i < 3; i++)
j *= atoi(argv[i]);
printf("%d\n", j);
}
return (0);
}