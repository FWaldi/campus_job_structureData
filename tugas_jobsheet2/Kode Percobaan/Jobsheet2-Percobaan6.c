//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[50];
    char jurusan[50];
    int nilai;
};

typedef struct Mahasiswa data;

int main(void) {
    printf("======================\n");
    printf("Programmer :\n");
    printf("Nama\t: Fitri Waldi\n");
    printf("NIM\t: 22343021\n");
    printf("======================\n");

    printf("\n==========================\n");
    printf("Welcome to the world of C");
    printf("\n==========================\n");

    printf("\n============================================================================\n");
    printf("Structure 2 (With Typedef) :\n\n");

    data mhs;
    strcpy(mhs.nama, "John Doe");
    strcpy(mhs.jurusan, "Sistem Informasi");
    mhs.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s ", mhs.nama, mhs.jurusan);
    printf("memperoleh nilai UAS %d\n", mhs.nilai);
    printf("============================================================================\n");

    return 0;
}
