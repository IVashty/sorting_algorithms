#include "sort.h"

/**
 * swap - function that swap array elements
 * @n_one: ptr to array element
 * @n_two: prt to array element
 * Return: void
 */

void swap(int *n_one, int *n_two)
{
int temp = *n_one;
*n_one = *n_two;
*n_two = temp;
}

/**
 * bubble_sort - sort an array of integers asending order
 * @array: input array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
size_t v, k;
char isSorted;

for (v = 1; v < size; v++)
{
isSorted = 1;
for (k = 0; k < size - 1; k++)
{
if (array[k] > array[k + 1])
{
swap(&array[k], &array[k + 1]);
isSorted = 0;
print_array(array, size);
}
}
/* if no two elements were swapped by inner loop, then break */
if (isSorted == 1)
break;
}
}
