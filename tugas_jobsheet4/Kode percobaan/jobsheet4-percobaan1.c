//Dibuat-oleh_22343921_Fitri-Waldi
//Insertion-at-front
#include <stdio.h>
#include <stdlib.h>

// Struktur dari node
struct Node
{
    int data;
    struct Node *next; // Pointer ke node berikutnya
    struct Node *prev; // Pointer ke node sebelumnya
};

// Menambahkan node baru pada awal linked list
void push(struct Node** head_ref, int new_data)
{
    // 1. alokasi memori untuk node baru
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 2. isi data pada node baru
    new_node->data = new_data;

    // 3. hubungkan node baru dengan head dan previous dengan NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    // 4. jika head bukan NULL, ubah previous dari head menjadi node baru
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    // 5. pindahkan head untuk menunjuk ke node baru
    (*head_ref) = new_node;
}

// Menampilkan isi linked list
void printList(struct Node* node)
{
    struct Node* last;

    // Traversal maju
    printf("\nTraversal in forward direction \n");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }

    // Traversal mundur
    printf("\nTraversal in reverse direction \n");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

int main()
{
    // Mulai dengan linked list kosong
    struct Node* head = NULL;

    // Tambahkan node baru
    push(&head, 6);
    push(&head, 5);
    push(&head, 2);

    printf("Created DLL is: ");
    printList(head);

    getchar();
    return 0;
}
