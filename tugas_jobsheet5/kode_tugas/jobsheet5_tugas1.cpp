//DibuatOleh_22343021_FitriWaldi

/*1. Implementasikan Double Linked List, dimana data yang dipakai adalah data buku yang ada dalam
sebuah perpustakaan (judul, nama pengarang, tahun). Program juga mengimplementasikan
penambahan dan pengurangan simpul pada Linked List berdasarkan judul buku.*/

//Double Linked List
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur data buku
struct Buku {
    char judul[100];
    char pengarang[50];
    int tahun;
};

// Struktur data node
struct Node {
    struct Buku buku;
    struct Node *prev;
    struct Node *next;
};

// Fungsi untuk membuat node baru
struct Node* buatNode(struct Buku buku) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    if (node == NULL) {
        printf("Alokasi memori gagal\n");
        exit(EXIT_FAILURE);
    }
    node->buku = buku;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

// Fungsi untuk menambahkan node di awal linked list
void tambahAwal(struct Node** head, struct Buku buku) {
    struct Node* node = buatNode(buku);
    if (*head == NULL) {
        *head = node;
        return;
    }
    node->next = *head;
    (*head)->prev = node;
    *head = node;
}

// Fungsi untuk menambahkan node di akhir linked list
void tambahAkhir(struct Node** head, struct Buku buku) {
    struct Node* node = buatNode(buku);
    if (*head == NULL) {
        *head = node;
        return;
    }
    struct Node* tail = *head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = node;
    node->prev = tail;
}

// Fungsi untuk menghapus node dari linked list berdasarkan judul buku
void hapusBuku(struct Node** head, char* judul) {
    struct Node* node = *head;
    while (node != NULL) {
        if (strcmp(node->buku.judul, judul) == 0) {
            if (node->prev == NULL) {
                *head = node->next;
                if (*head != NULL) {
                    (*head)->prev = NULL;
                }
            } else if (node->next == NULL) {
                node->prev->next = NULL;
            } else {
                node->prev->next = node->next;
                node->next->prev = node->prev;
            }
            free(node);
            return;
        }
        node = node->next;
    }
}

// Fungsi untuk menampilkan semua data buku dalam linked list
void tampilkan(struct Node* node) {
    int i = 1;
    while (node != NULL) {
        printf("%d. Judul: %s, Pengarang: %s, Tahun: %d\n", i, node->buku.judul, node->buku.pengarang, node->buku.tahun);
        node = node->next;
        i++;
    }
}

int main() {
    printf("Program double cincular link untuk menambah dan mengurang buku :\n");
    struct Node* head = NULL;
    int choice = 0;
    struct Buku buku;

    while (choice != 4) {
        printf("\nMenu:\n");
        printf("1. Tambah buku\n");
        printf("2. Hapus buku\n");
        printf("3. Tampilkan buku\n");
        printf("4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nMasukkan judul buku: ");
                scanf("%s", buku.judul);
                printf("Masukkan nama pengarang: ");
                scanf("%s", buku.pengarang);
                printf("Masukkan tahun terbit: ");
                scanf("%d", &buku.tahun);
                tambahAkhir(&head, buku);
                printf("Buku berhasil ditambahkan\n");
                break;
            case 2:
                printf("\nMasukkan judul buku yang ingin dihapus: ");
                scanf("%s", buku.judul);
                hapusBuku(&head, buku.judul);
                printf("Buku berhasil dihapus\n");
                break;
            case 3:
                printf("\nDaftar buku:\n");
                tampilkan(head);
                break;
            case 4:
                printf("\nProgram selesai\n");
                break;
            default:
                printf("\nPilihan tidak valid\n");
                break;
            }
    }

   return 0;
}


