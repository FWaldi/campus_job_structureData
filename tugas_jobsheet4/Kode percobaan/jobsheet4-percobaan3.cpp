//Dibuat-oleh_22343921_Fitri-Waldi
//Insertion-at-End
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

void push(Node **head_ref, int new_data) {
    // 1. Allocate node
    Node *new_node = (Node *)malloc(sizeof(Node));
    // 2. Put in the data
    new_node->data = new_data;
    // 3. Make next of new node as head and previous as NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    // 4. Change prev of head node to new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    // 5. Move the head to point to the new node
    (*head_ref) = new_node;
}

void append(Node **head_ref, int new_data) {
    // 1. Allocate node
    Node *new_node = (Node *)malloc(sizeof(Node));
    // 2. Put in the data
    new_node->data = new_data;
    // 3. This new node is going to be the last node, so make next of it as NULL
    new_node->next = NULL;
    // 4. If the Linked List is empty, then make the new node as head
    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    // 5. Else traverse till the last node
    Node *last = *head_ref;
    while (last->next != NULL)
        last = last->next;
    // 6. Change the next of last node
    last->next = new_node;
    // 7. Make last node as previous of new node
    new_node->prev = last;
}

void printList(Node *node) {
    printf("\nTraversal in forward direction\n");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\nTraversal in reverse direction\n");
    while (node != NULL && node->next != NULL)
        node = node->next;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->prev;
    }
}

int main() {
    Node *head = NULL;
    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);
    // Insert 7 at the beginning. So linked list becomes 7->6->NULL
    push(&head, 7);
    // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
    push(&head, 1);
    // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
    append(&head, 4);
    printf("Created DLL is: ");
    printList(head);
    getchar();
    return 0;
}
