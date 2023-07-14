#include <stdio.h>
/**
 * main - Prints prints the alphabet in lowercase except q and e
 *
 * Return: 0 (success)
 */
int main() {
    char l;

    for (l = 'a'; l <= 'z'; l++) {
        if (l != 'q' && l != 'e') {
            putchar(l);
        }
    }

    putchar('\n');

    return 0;
}
