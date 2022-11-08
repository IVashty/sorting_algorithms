#include "sort.h"
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
