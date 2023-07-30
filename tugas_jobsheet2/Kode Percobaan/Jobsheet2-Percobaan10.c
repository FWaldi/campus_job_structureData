//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>

typedef struct {
int HH, MM, SS;
} jam;

void tampil(jam j) {
printf("JAM %02d:%02d:%02d\n", j.HH, j.MM, j.SS);
}

int valid(jam j) {
return j.HH >= 0 && j.HH <= 23 && j.MM >= 0 && j.MM <= 59 && j.SS >= 0 && j.SS <= 59;
}

jam input() {
jam j;
do {
printf("Masukkan Jam: ");
scanf("%d", &j.HH);
printf("Masukkan Menit: ");
scanf("%d", &j.MM);
printf("Masukkan Detik: ");
scanf("%d", &j.SS);
} while (!valid(j));
return j;
}

int main() {
    printf("======================\n");
    printf("Progammer :\n");
    printf("Nama\t: Fitri Waldi\n");
    printf("NIM\t: 22343021\n");
    printf("======================\n");

    printf("\n==========================\n");
    printf("Welcome to the world of C");
    printf("\n==========================\n");

    printf("\n==============================\n");
    printf("ADT) :\n\n");

    jam j = input();
    tampil(j);
    printf("==============================\n");

    return 0;
}
