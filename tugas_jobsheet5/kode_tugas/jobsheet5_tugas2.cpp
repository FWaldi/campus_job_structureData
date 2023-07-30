//DibuatOleh_22343021_FitriWaldi

/*2. Implementasikan Double Linked List ini juga untuk menggambarkan antrian mobil yang ada pada
sebuah perparkiran. Data yang digunakan adalah: no plat, merk mobil nama pemilik. Program juga
mengimplementasikan penambahan dan pengurangan simpul pada Linked List berdasarkan no plat.*/

//Double Linked List
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur data mobil
struct Mobil {
    char nomor_plat[20];
    char merk[50];
    char pemilik[50];
};

// Struktur data node
struct Node {
    struct Mobil mobil;
    struct Node *prev;
    struct Node *next;
};

// Fungsi untuk membuat node baru
struct Node* buatNode(struct Mobil mobil) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    if (node == NULL) {
        printf("Alokasi memori gagal\n");
        exit(EXIT_FAILURE);
    }
    node->mobil = mobil;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

// Fungsi untuk menambahkan node di awal linked list
void tambahAwal(struct Node** head, struct Mobil mobil) {
    struct Node* node = buatNode(mobil);
    if (*head == NULL) {
        *head = node;
        return;
    }
    node->next = *head;
    (*head)->prev = node;
    *head = node;
}

// Fungsi untuk menambahkan node di akhir linked list
void tambahAkhir(struct Node** head, struct Mobil mobil) {
    struct Node* node = buatNode(mobil);
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

// Fungsi untuk menghapus node dari linked list berdasarkan nomor plat mobil
void hapusMobil(struct Node** head, char* nomor_plat) {
    struct Node* node = *head;
    while (node != NULL) {
        if (strcmp(node->mobil.nomor_plat, nomor_plat) == 0) {
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

// Fungsi untuk menampilkan semua data mobil dalam linked list
void tampilkan(struct Node* node) {
    int i = 1;
    while (node != NULL) {
        printf("%d. Nomor Plat: %s, Merk: %s, Pemilik: %s\n", i, node->mobil.nomor_plat, node->mobil.merk, node->mobil.pemilik);
        node = node->next;
        i++;
    }
}

int main() {
    printf("Program double linked list untuk antrian mobil di perparkiran:\n");
    struct Node* head = NULL;
    int choice = 0;
    struct Mobil mobil;

    while (choice != 4) {
        printf("\nMenu:\n");
        printf("1. Tambah mobil\n");
        printf("2. Hapus mobil\n");
        printf("3. Tampilkan mobil\n");
        printf("4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nTambah Mobil\n");
            printf("Nomor Plat: ");
            scanf("%s", mobil.nomor_plat);
            printf("Merk: ");
            scanf("%s", mobil.merk);
            printf("Pemilik: ");
            scanf("%s", mobil.pemilik);
            tambahAkhir(&head, mobil);
            printf("Mobil berhasil ditambahkan ke antrian.\n");
            break;
        case 2:
            printf("\nHapus Mobil\n");
            printf("Nomor Plat: ");
            scanf("%s", mobil.nomor_plat);
            hapusMobil(&head, mobil.nomor_plat);
            printf("Mobil dengan nomor plat %s berhasil dihapus dari antrian.\n", mobil.nomor_plat);
            break;
        case 3:
            printf("\nDaftar Mobil di Antrian\n");
            if (head == NULL) {
                printf("Antrian kosong.\n");
            } else {
                tampilkan(head);
            }
            break;
        case 4:
            printf("\nTerima kasih telah menggunakan program ini.\n");
            break;
        default:
            printf("\nInput tidak valid. Silakan coba lagi.\n");
    }
}

// Hapus semua node sebelum keluar dari program
struct Node* node = head;
while (node != NULL) {
    struct Node* temp = node;
    node = node->next;
    free(temp);
}

return 0;
}
