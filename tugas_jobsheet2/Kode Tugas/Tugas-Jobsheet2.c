//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>
#include <string.h> 

typedef struct Mahasiswa {
    char nama[50];
    char jurusan[50];
    int nilai;
} data;

int main(void) {
    printf("======================\n");
    printf("Programmer :\n");
    printf("Nama\t: Fitri Waldi\n");
    printf("NIM\t: 22343021\n");
    printf("======================\n");

    printf("\n==========================\n");
    printf("Welcome to the world of C");
    printf("\n==========================\n");

    printf("\n============================================================\n");
    printf("Structure 3 (With Typedef) :\n\n");

    data mhs;
    strcpy(mhs.nama, "Nama Mahasiswa");
    strcpy(mhs.jurusan, "Jurusan Mahasiswa");
    mhs.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s\n", mhs.nama, mhs.jurusan);
    printf("memperoleh nilai UAS %i\n", mhs.nilai);
    printf("============================================================\n");

    return 0;
}
