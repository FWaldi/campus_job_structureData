//Dibuat_oleh_Fitri-Waldi_NIM-22343021

#include <stdio.h>
#include <stdlib.h>

// Struktur simpul (node)
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Membuat simpul baru
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Menampilkan simpul dalam urutan Breadth First Search (BFS)
void breadthFirstSearch(struct Node* root) {
    if (root == NULL)
        return;

    // Inisialisasi queue untuk menyimpan simpul yang akan diproses
    struct Node** queue = (struct Node**)malloc(sizeof(struct Node*) * 100);
    int front = 0;
    int rear = 0;

    // Masukkan root ke dalam queue
    queue[rear++] = root;

    while (front < rear) {
        // Keluarkan simpul dari queue dan tampilkan datanya
        struct Node* currentNode = queue[front++];
        printf("%d ", currentNode->data);

        // Masukkan anak-anak simpul ke dalam queue jika ada
        if (currentNode->left != NULL)
            queue[rear++] = currentNode->left;
        if (currentNode->right != NULL)
            queue[rear++] = currentNode->right;
    }

    // Bebaskan memori yang dialokasikan untuk queue
    free(queue);
}

int main() {
    // Membuat pohon biner
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Breadth First Search (BFS) traversal: ");
    breadthFirstSearch(root);

    return 0;
}
