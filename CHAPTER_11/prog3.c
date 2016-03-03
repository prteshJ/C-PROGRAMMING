/*********************************************************
    Exercise 3
		The function developed in exercise 2 only inserts an 
element after an existing element in the list, thereby preventing you 
from inserting a new entry at the front of the list. How can you use 
this same function and yet overcome this problem? (Hint: Think about 
setting up a special structure to point to the beginning of the list.)
*********************************************************/

/* The approach taken in this exercise was to set the first element of 
the linked list as a dummy element, the first important element on the 
list starts at index 1, so to speak.*/

#include <stdio.h>

struct entry
{
    int value;
    struct entry* next;
};

void insertEntry (struct entry* insEntry, struct entry* aftEntry)
{
    insEntry->next = aftEntry->next;
    aftEntry->next = insEntry;
}

int main (void)
{
    struct entry begin, n0, n1, n2;
    struct entry n1_2;
    struct entry* pointer;

    begin = (struct entry) {0, &n0};
    n0 = (struct entry) {1, &n1};
    n1 = (struct entry) {2, &n2};
    n2 = (struct entry) {3, (struct entry*) 0};
    n1_2 = (struct entry) {4, (struct entry*) 0};

    pointer = begin.next;

    printf("Before the insertion: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    insertEntry(&n1_2, &begin);
    pointer = begin.next;

    printf("After the insertion: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    return 0;
}
