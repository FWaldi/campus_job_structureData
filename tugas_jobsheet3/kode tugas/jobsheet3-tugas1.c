//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *fibonacci;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    // alokasi memori untuk array fibonacci dengan malloc
    fibonacci = (int *)malloc(n * sizeof(int));

    if (fibonacci == NULL) {
        printf("Terjadi kesalahan dalam alokasi memori");
        exit(1);
    }

    // inisialisasi dua bilangan pertama dengan 0 dan 1
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    // hitung dan tampilkan bilangan Fibonacci
    for (i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    printf("Bilangan Fibonacci pertama hingga ke-%d adalah: ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }

    // bebaskan memori yang dialokasikan
    free(fibonacci);

    return 0;
}
