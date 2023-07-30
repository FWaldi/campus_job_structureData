//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>
#include <string.h>

typedef int angka;
typedef char huruf;

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
    printf("ADT :\n\n");

    angka umur;
    huruf h[1];
    huruf nama[10];

    printf("Masukkan umur anda : ");
    scanf("%d", &umur);
    printf("Umur anda adalah %d\n", umur);

    printf("\nMasukkan huruf : ");
     scanf("%s", nama);
    printf("Huruf anda %c\n", h);

    printf("\nMasukkan nama : ");
    scanf("%s", nama);
    printf("Nama anda %s\n", nama);
    printf("=================================\n");

    return 0;
}
