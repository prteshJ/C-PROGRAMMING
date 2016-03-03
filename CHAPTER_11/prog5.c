/*********************************************************
    Exercise 5
		A doubly linked list is a list in which each entry 
contains a pointer to the preceding entry in the list as well as a 
pointer to the next entry in the list. Define the appropriate structure 
definition for a doubly linked list entry and then write a small program 
that implements a small doubly linked list and prints out the elements 
of the list.
*********************************************************/

#include <stdio.h>

struct entry
{
    struct entry* previous;
    int value;
    struct entry* next;
};

int main (void)
{
    struct entry n0, n1, n2;
    struct entry* pointer;

    n0 = (struct entry) {(struct entry*) 0, 1, &n1};         // n0 (NULL, 1 , &n1)
    n1 = (struct entry) {&n0, 2, &n2};                      //  n1 (&n0,  2,  &n2)
    n2 = (struct entry) {&n1, 3, (struct entry*) 0};       //   n2 (&n1,  3,  NULL)

    pointer = &n0;

    printf("Normal sequence: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    pointer = &n2;

    printf("Reverse sequence: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->previous;
    }
    printf("\n");

    return 0;
}
