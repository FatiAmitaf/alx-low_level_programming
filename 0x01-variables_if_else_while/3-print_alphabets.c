#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (success)
*/
int main(void)
{
char l = 'a';
char u = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (u <= 'Z')
{
putchar(u);
u++;
}
putchar('\n');
return (0);
}
