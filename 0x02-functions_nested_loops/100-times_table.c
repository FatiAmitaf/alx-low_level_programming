#include "main.h"
/**
 * print_times_table - Prints the n times table starting with 0.
 * @n: The number specifying the size of the times table.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;
    int row, col, result;
    for (row = 0; row <= n; row++)
    {
        for (col = 0; col <= n; col++)
        {
            result = row * col;
            if (col == 0)
                printf("%d", result);
            else
                printf(", %3d", result);
        }
        printf("\n");
    }
}
