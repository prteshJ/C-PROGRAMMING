/*********************************************************
    Exercise 2
		Write a function called insertEntry() to insert a new 
entry into a linked list. Have the procedure take as arguments a pointer 
to the list entry to be inserted (of type struct entry as defined in 
this chapter), and a pointer to an element in the list after which the 
new entry is to be inserted.
*********************************************************/

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
    struct entry n0, n1, n2;
    struct entry n1_2;
    struct entry* pointer = &n0;

    n0 = (struct entry) {0, &n1};
    n1 = (struct entry) {1, &n2};
    n2 = (struct entry) {2, (struct entry*) 0};
    n1_2 = (struct entry) {3, (struct entry*) 0};


    printf("Before the insertion: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    insertEntry(&n1_2, &n2);
    pointer = &n0;

    printf("After the insertion: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    return 0;
}
