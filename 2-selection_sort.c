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
  * selection_sort - algorithm. slow.
  * @array: input array
  * @size: size of the input
  */
void selection_sort(int *array, size_t size)
{
size_t v, k, low, tmp;
int *head;

head = array;
for (v = 0; v < size; v++, head++)
{
for (low = v, k = v; k < size; k++)
if (array[k] < array[low])
low = k;
tmp = array[low];
array[low] = *head;
*head = tmp;
print_array(array, size);
}
}
