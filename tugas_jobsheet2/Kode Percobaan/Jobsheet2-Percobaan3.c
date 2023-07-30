//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>

int main() {
    printf("======================\n");
    printf("Progammer :\n");
    printf("Nama\t: Fitri Waldi\n");
    printf("NIM\t: 22343021\n");
    printf("======================\n");

    printf("\n==========================\n");
    printf("Welcome to the world of C");
    printf("\n==========================\n");

    printf("\n================================\n");
    printf("Array 3 :\n");

    int n;

    printf("\nMasukkan banyaknya bilangan: ");
    scanf("%d", &n);

    int angka[n];

    for (int i = 0; i < n; i++) {
        printf("Masukkan angka ke %d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Angka ke %d: %d\n", i + 1, angka[i]);
    }
      printf("================================\n");

    getchar();
    return 0;
}
