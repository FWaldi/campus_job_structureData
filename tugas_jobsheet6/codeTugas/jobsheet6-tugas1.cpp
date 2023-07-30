//Dibuat_oleh_Fitri-Waldi_NIM-22343021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef struct {
    char nim[10];
    char nama[100];
    int nilai;
} Mahasiswa;

typedef struct {
    Mahasiswa data[MAX_STACK_SIZE];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isStackEmpty(Stack *s) {
    return s->top == -1;
}

int isStackFull(Stack *s) {
    return s->top == MAX_STACK_SIZE - 1;
}

void push(Stack *s, Mahasiswa mhs) {
    if (isStackFull(s)) {
        printf("Stack is full.\n");
        return;
    }
    s->top++;
    s->data[s->top] = mhs;
}

Mahasiswa pop(Stack *s) {
    if (isStackEmpty(s)) {
        printf("Stack is empty.\n");
        exit(EXIT_FAILURE);
    }
    Mahasiswa mhs = s->data[s->top];
    s->top--;
    return mhs;
}

void display(Stack *s) {
    printf("Data Mahasiswa:\n");
    printf("--------------------------------------------------\n");
    printf("| No  | NIM       | Nama                     | Nilai |\n");
    printf("--------------------------------------------------\n");
    for (int i = s->top; i >= 0; i--) {
        printf("| %-3d | %-9s | %-24s | %-5d |\n", s->top - i + 1, s->data[i].nim, s->data[i].nama, s->data[i].nilai);
    }
    printf("--------------------------------------------------\n");
}

void sort(Stack *s) {
    for (int i = s->top; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (s->data[j].nilai < s->data[j+1].nilai) {
                Mahasiswa temp = s->data[j];
                s->data[j] = s->data[j+1];
                s->data[j+1] = temp;
            }
        }
    }
}

int main() {
    Stack mhsStack;
    initStack(&mhsStack);

    int choice;
    Mahasiswa mhs;
    do {
        printf("\n");
        printf("Menu:\n");
        printf("1. Tambah Data Mahasiswa\n");
        printf("2. Hapus Data Mahasiswa Teratas\n");
        printf("3. Tampilkan Data Mahasiswa\n");
        printf("4. Urutkan Data Mahasiswa Berdasarkan Nilai\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("NIM: ");
                scanf("%s", mhs.nim);
                printf("Nama: ");
                scanf(" %[^\n]s", mhs.nama);
                printf("Nilai: ");
                scanf("%d", &mhs.nilai);
                push(&mhsStack, mhs);
                break;
            case 2:
                mhs = pop(&mhsStack);
                printf("Data Mahasiswa Terhapus:\n");
                printf("NIM: %s\n", mhs.nim);
                printf("Nama: %s\n", mhs.nama);
                printf("Nilai: %d\n", mhs.nilai);
                break;
                case 3:
                display(&mhsStack);
                break;
                case 4:
                sort(&mhsStack);
                printf("Data Mahasiswa Terurut:\n");
                display(&mhsStack);
                break;
                case 5:
                printf("Terima kasih.\n");
                break;
                default:
                printf("Pilihan tidak valid.\n");
                break;
                }
                } while (choice != 5);
return 0;
}
