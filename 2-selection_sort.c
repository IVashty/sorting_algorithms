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
size_t v, k, head;

if (!array || !*array || !size || size < 2)
return;

for (v = 0; v < size - 1; v++)
{
head = v;
for (k = v + 1; k < size; k++)
{
if (array[k] < array[head])
head = k;
}
if (head != v)
{
swap(&array[head], &array[v]);
print_array((const int *)array, size);
}
}
}
