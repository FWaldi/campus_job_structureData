//DibuatOleh_22343021_FitriWaldi
#include<stdio.h>

int main() {
    int usia1 = 50;
    int usia2 = 18;
    //menciptakan sebuah pointer
    int *ptr;
    // menugaskan pointer tersebut kepada usia1
    ptr = &usia1; // & adalah operator alamat

    printf("\nUsia saya (usia1): %d ", usia1); // menampilkan 50
    printf("\nUsia saya (*ptr): %d", *ptr); // menampilkan 50
    //ptr merupakan nilai yang disimpan ptr, yaitu 50
    printf("\n (usia1) %p (ptr) %p", (void*)&usia1, (void*)ptr);
    // ptr adalah alamat dari usia1 jadi juga merupakan &usia1. Keduanya sama.
    // Sekarang Anda akan menugaskannya kepada usia2
    ptr = &usia2;

    printf("\nUsia Anda (*ptr): %d", *ptr); // menampilkan 18
    //*ptr merupakan nilai yang disimpan ptr, yaitu 18

    printf("\n(usia2) %p (ptr) %p", (void*)&usia2, (void*)ptr);
    // ptr adalah alamat dari usia2 jadi juga merupakan &usia2. Keduanya sama

    // menampilkan alamat dari variabel ptr. Anda tidak memerlukan
    // alamat ini.
    printf("\n(ptr) %p", (void*)&ptr);

    return 0;
}
