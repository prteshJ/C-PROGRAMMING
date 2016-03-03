/*********************************************************
    Exercise 4
		Write a function called removeEntry() to remove an entry 
from a linked list. The sole argument to the procedure should be a 
pointer to the list. Have the function remove the entry after the one 
pointed to by the argument. (Why can’t you remove the entry pointed to 
by the argument?) You need to use the special structure you set up in 
exercise 3 to handle the special case of removing the first element from 
the list.
*********************************************************/

/* The entry passed as argument can't be removed because you need to 
provide the precedent entry, which contains the pointer to the 
structure.*/

#include <stdio.h>

struct entry
{
    int value;
    struct entry* next;
};

void removeEntry (struct entry* remEntry)
{  
    remEntry->next = remEntry->next->next;   // &begin -> next = &n1  EQUIVALENT TO begin = (struct entry) {0, &n1}   if &begin is passed in removeEntry from main
}

int main (void)
{
    struct entry begin, n0, n1, n2;
    struct entry* pointer;

    begin = (struct entry) {0, &n0};                 // &begin
    n0 = (struct entry) {1, &n1};                   // & n0
    n1 = (struct entry) {2, &n2};                  // & n1
    n2 = (struct entry) {3, (struct entry*) 0};   // & n2

    pointer = begin.next;

    printf("Before the removal: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    removeEntry(&n0);
    pointer = begin.next;

    printf("After the removal: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    return 0;
}
