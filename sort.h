#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


/*print_array*/
void print_array(const int *array, size_t size);

/*print_line*/
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

/*TASK O prototype*/
/*0-main*/
int main(void);

/*0-bubble_sort*/
void swap(int *xp, int *yp);
void bubble_sort(int *array, size_t size);

/*1-insertion_sort_list*/
void insertion_sort_list(listint_t **list);

/*selection_sort*/
void selection_sort(int *array, size_t size);

/*3-quick_sort*/
void quick_sort(int *array, size_t size);

#endif
