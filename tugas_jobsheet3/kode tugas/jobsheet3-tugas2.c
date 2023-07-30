//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mengecek apakah sebuah bilangan merupakan bilangan prima
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    printf("Masukkan jumlah bilangan prima yang ingin ditampilkan: ");
    scanf("%d", &n);
    printf("Masukkan ukuran awal alokasi memori: ");
    scanf("%d", &m);

    // Mengalokasikan memori dengan ukuran awal m
    int *primes = (int *)malloc(m * sizeof(int));
    if (primes == NULL) {
        printf("Gagal mengalokasikan memori!");
        return 1;
    }

    int count = 0;
    int num = 2;

    // Menambahkan bilangan prima ke array menggunakan pointer
    while (count < n) {
        if (isPrime(num)) {
            *(primes + count) = num;
            count++;
            if (count == m) {
                // Jika array sudah penuh, maka tambahkan ukuran memori menggunakan realloc()
                m *= 2;
                primes = (int *)realloc(primes, m * sizeof(int));
                if (primes == NULL) {
                    printf("Gagal mengalokasikan memori!");
                    return 1;
                }
            }
        }
        num++;
    }

    // Menampilkan bilangan prima
    printf("Bilangan prima pertama %d adalah:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(primes + i));
    }

    // Membuang memori yang telah dialokasikan
    free(primes);

    return 0;
}
