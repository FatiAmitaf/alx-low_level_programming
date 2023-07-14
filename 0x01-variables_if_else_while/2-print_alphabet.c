#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/
int main(void)
{
char l = 'a';
while (l <= 'z')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
