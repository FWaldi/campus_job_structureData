//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nama[25];
  int nik;
  char alamat[30];
  char status[25];
} ktp;

int main(){
    printf("======================\n");
    printf("Progammer :\n");
    printf("Nama\t: Fitri Waldi\n");
    printf("NIM\t: 22343021\n");
    printf("======================\n");

    printf("\n==========================\n");
    printf("Welcome to the world of C");
    printf("\n==========================\n");

    printf("\n=================================\n");
    printf("Structure (ADT) :\n\n");

    ktp myktp;

    printf("Nama\t: ");
    fgets(myktp.nama, 25, stdin);
    printf("NIK \t: ");
    scanf("%d", &myktp.nik);
    fflush(stdin);
    printf("Alamat\t: ");
    fgets(myktp.alamat, 30, stdin);
    printf("Kewarganegaraan\t: ");
    fgets(myktp.status, 25, stdin);
    printf("=================================\n");

    return 0;
}
