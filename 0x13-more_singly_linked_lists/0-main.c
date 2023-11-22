#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point of the program
 * 
 * Return: Always 0 indicating successful execution
 */
int main(void)
{
    /* Declare pointers for the linked list */
    listint_t *head;
    listint_t *new;

    /* Initialize a node called 'hello' with value 8 */
    listint_t hello = {8, NULL};
    
    /* Variable to store the number of elements in the list */
    size_t n;

    /* Set the 'head' pointer to point to the 'hello' node */
    head = &hello;

    /* Allocate memory for a new node */
    new = malloc(sizeof(listint_t));

    /* Check if memory allocation was successful */
    if (new == NULL)
    {
        printf("Error: Unable to allocate memory\n");
        return (1); /* Return 1 to indicate an error */
    }

    /* Initialize the new node with the value 9 */
    new->n = 9;

    /* Link the new node to the existing list */
    new->next = head;

    /* Update the 'head' pointer to the new node */
    head = new;

    /* Print the elements of the linked list */
    n = print_listint(head);
    
    /* Print the number of elements in the list */
    printf("-> %lu elements\n", n);

    /* Free the memory allocated for the new node */
    free(new);

    return (0); /* Return 0 to indicate successful execution */
}

