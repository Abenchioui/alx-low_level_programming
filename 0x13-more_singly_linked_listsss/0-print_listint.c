#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/
size_t print_listint(const listint_t *h)
{
    // declare a pointer to a listint_t element and an unsigned integer counter
    const listint_t *tp;
    unsigned int cntr = 0;

    // set the pointer to the head of the list
    tp = h;

    // iterate through the list
    while (tp)
    {
        // print the value of the current element
        printf("%d\n", tp->n);

        // increment the counter
        cntr++;

        // move the pointer to the next element
        tp = tp->next;
    }

    // return the number of elements in the list
    return (cntr);
}

int main(void)
{
    // declare pointers to linked list elements
    listint_t *head;
    listint_t *new;

    // initialize a new listint_t element with a value of 8 and NULL next pointer
    listint_t hello = {8, NULL};

    // declare a size_t variable to hold the number of elements in the linked list
    size_t n;

    // set the head pointer to the address of the hello element
    head = &hello;

    // create a new listint_t element using malloc
    new = malloc(sizeof(listint_t));

    // check if malloc was successful
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }

    // set the n value of the new element to 9
    new->n = 9;

    // set the next pointer of the new element to the current head pointer
    new->next = head;

    // update the head pointer to point to the new element
    head = new;

    // call the print_listint function to print the elements of the linked list
    n = print_listint(head);

    // print the number of elements in the linked list
    printf("-> %lu elements\n", n);

    // free the memory allocated for the new element
    free(new);

    return (0);
}
