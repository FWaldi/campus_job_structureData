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

    printf("\n==================\n");
    printf("Array 2 :\n");

    int n[10];
    int i,j;
    for (i = 0; i < 10; i++) {
        n[i] = i + 100;
  }
    for (j = 0; j < 10; j++) {
        printf("\nElement[%d] = %d", j, n[j]);
  }
    printf("\n===================\n");
  return 0;
}
