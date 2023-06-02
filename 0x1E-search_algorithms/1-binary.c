#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  /* Array is NULL, return -1 */
    }

    size_t low = 0;
    size_t high = size - 1;

    while (low <= high) {
        size_t mid = (low + high) / 2;
        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;  /* Value found, return index */
        } else if (array[mid] < value) {
            low = mid + 1;  /* Search the right half */
        } else {
            high = mid - 1;  /* Search the left half */
        }
    }

    return -1;  /* Value not found, return -1 */
}
