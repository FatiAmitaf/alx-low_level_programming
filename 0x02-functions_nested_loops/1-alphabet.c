#include "main.h"
/**
 * main -  function prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/
void print_alphabet(void) {
char l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
}
