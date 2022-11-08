# 0x1B. C - Sorting algorithms & Big O

***

__General__

   - At least four different sorting algorithms
   - What is the Big O notation, and how to evaluate the time complexity of an algorithm
   - How to select the best sorting algorithm for a given input
   - What is a stable sorting algorithm

## Requirements
__General__

   - Allowed editors: vi, vim, emacs
   - All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
   - All your files should end with a new line
   - A README.md file, at the root of the folder of the project, is mandatory
   - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
   - You are not allowed to use global variables
   - No more than 5 functions per file
   - Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
    - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    - The prototypes of all your functions should be included in your header file called sort.h
   - Don’t forget to push your header file
   - All your header files should be include guarded
   - A list/array does not need to be sorted if its size is less than 2.

_More Info_

## Data Structure and Functions

- For this project you are given the following `print_array`, and `print_list` functions:
        - file 1: __print_array.c__

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
        - file 2: __print_list.c__
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

```
- Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions print_array and print_list in your sort.h header file
    Please use the following data structure for doubly linked list:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
Please, note this format is used for Quiz and Task questions.

    O(1)
    O(n)
    O(n!)
    n square -> O(n^2)
    log(n) -> O(log(n))
    n * log(n) -> O(nlog(n))
    n + k -> O(n+k)
    …

Please use the “short” notation (don’t use constants).
Example: 
        O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.
__Tests__

Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)

***

## TASKS:
0. Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

    Prototype: void bubble_sort(int *array, size_t size);
    You’re expected to print the array after each time you swap two elements (See example below)

Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

    in the best case
    in the average case
    in the worst case

    Compile with:
`gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble`

1. Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

    Prototype: `void insertion_sort_list(listint_t \**list);`
    You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
    You’re expected to print the list after each time you swap two elements (See example below)

Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

    in the best case
    in the average case
    in the worst case
Compile with:
`gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion`

2. Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

    Prototype: `void selection_sort(int *array, size_t size);`
    You’re expected to print the array after each time you swap two elements (See example below)

Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

    in the best case
    in the average case
    in the worst case

Compile with:
`gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select`

3. Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

    Prototype: void quick_sort(int *array, size_t size);
    You must implement the Lomuto partition scheme.
    The pivot should always be the last element of the partition being sorted.
    You’re expected to print the array after each time you swap two elements (See example below)

Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

    in the best case
    in the average case
    in the worst case
Compile with:
`gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick`

Author: IVashty.
