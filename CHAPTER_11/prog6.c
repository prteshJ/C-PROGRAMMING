/*********************************************************
    Exercise 6
		Develop insertEntry() and removeEntry() functions for a 
doubly linked list that are similar in function to those developed in 
previous exercises for a singly linked list. Why can your removeEntry() 
function now take as its argument a direct pointer to the entry to be 
removed from the list?
*********************************************************/

/* Now you can remove the entry passed as argument because the pointer 
to the previous element is passed along with the structure.*/

#include <stdio.h>

struct entry
{
    struct entry* previous;
    int value;
    struct entry* next;
}; 

void insertEntry (struct entry* insEntry, struct entry* aftEntry)
{
    insEntry->previous = aftEntry;                                  // n1_2 (&begin, 4, NULL) 
    insEntry->next = aftEntry->next;                               //  n1_2 (&begin, 4, &n0)           DONE
    aftEntry->next->previous = insEntry;                          //   n0(&n1_2, 1, &n1)               DONE
    aftEntry->next = insEntry;                                   //    begin(NULL, 0, &n1_2)           DONE
}

void removeEntry (struct entry* remEntry)
{
    remEntry->next->previous = remEntry->previous;                 // n0    (&begin, 1, &n1)           DONE
    remEntry->previous->next = remEntry->next;                    //  begin (NULL,   0, &n0)           DONE
}

int main (void)
{
    struct entry begin, n0, n1, n2;
    struct entry n1_2;
    struct entry* pointer;

    begin = (struct entry) {(struct entry*) 0, 0, &n0};                   // begin (NULL,   0, &n0)
    n0 = (struct entry) {&begin, 1, &n1};                                //  n0    (&begin, 1, &n1)
    n1 = (struct entry) {&n0, 2, &n2};                                  //   n1    (&n0,    2, &n2)
    n2 = (struct entry) {&n1, 3, (struct entry*) 0};                   //    n2    (&n1,    3,  NULL)

    n1_2 = (struct entry) {(struct entry*) 0, 4, (struct entry*) 0};     //  n1_2  (NULL, 4, NULL)

    pointer = begin.next;

    printf("Normal: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

    insertEntry(&n1_2, &begin);                                         // begin (NULL, 0, &n1_2)  n1_2 (&begin, 4, &n0) n0 (&n1_2, 1, &n1)
    pointer = begin.next;

    printf("After add: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");
 
    removeEntry(&n1_2);                                                 // n1_2 (&begin, 4, &n0)  --> begin (NULL, 0, &n0)  n1_2 (&begin, 4, &n0) n0 (&begin, 1, &n1) 
    pointer = begin.next;

    printf("Removed: \n");
    while (pointer)
    {
        printf("Value in linked list entry: %i.\n", pointer->value);
        pointer = pointer->next;
    }
    printf("\n");

/*   pointer = &n1_2;
     printf("n1_2 -> previous->value %d \n", pointer->previous->value);      Even after removing n1_2 (&begin, 4, &n0) remains in memory
     printf("n1_2 -> value %d \n", pointer->value);                          We have changed links of its previous and next nodes  
     printf("n1_2 -> next->value %d \n", pointer->next->value); */ 


    return 0;
}
