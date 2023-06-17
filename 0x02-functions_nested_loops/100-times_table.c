#include <stdio.h>
#include "main.h"

/**
 * A function that prints the n times table, starting with 0
 */

void print_times_table(int n) {
    // Check if n is within the valid range
    if (n < 0 || n > 15) {
        return;  // Do nothing if n is outside the valid range
    }

    // Iterate from 0 to n
    for (int i = 0; i <= n; i++) {
        // Print the times table for each number from 0 to n
        for (int j = 0; j <= n; j++) {
            printf("%d ", i * j);  // Print the product of i and j
        }
        printf("\n");  // Move to the next line after each row
    }
}
