//DibuatOleh_22343021_FitriWaldi

#include <stdio.h>
#include <string.h>

struct Mahasiswa {
char nama[50];
char jurusan[50];
int nilai;
};

int main(){
    printf("======================\n");
    printf("Progammer :\n");
    printf("Nama\t: Fitri Waldi\n");
    printf("NIM\t: 22343021\n");
    printf("======================\n");

    printf("\n==========================\n");
    printf("Welcome to the world of C");
    printf("\n==========================\n");

    printf("\n=============================================================\n");
    printf("Structure 1 (Without Typedef) :\n\n");

    struct Mahasiswa mhs01;
    strcpy(mhs01.nama, "Ys");
    strcpy(mhs01.jurusan, "Teknik");
    mhs01.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s ", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai UAS %i \n", mhs01.nilai);
    printf("\n=============================================================\n");

    return 0;
}
