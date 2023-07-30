//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main()
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*) malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Error: Memory allocation failed for head.\n");
        return 1;
    }

    second = (struct node*) malloc(sizeof(struct node));
    if (second == NULL) {
        printf("Error: Memory allocation failed for second.\n");
        free(head);
        return 1;
    }

    third = (struct node*) malloc(sizeof(struct node));
    if (third == NULL) {
        printf("Error: Memory allocation failed for third.\n");
        free(head);
        free(second);
        return 1;
    }

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Code to manipulate the linked list goes here

    // Free the allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
