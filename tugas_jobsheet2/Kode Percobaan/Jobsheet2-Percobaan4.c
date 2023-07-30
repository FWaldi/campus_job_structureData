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
    printf("Array 4 :\n\n");

    int a[5][2] = {{0,0}, {1,2}, {2,4}, {3,6}, {4,8}};
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
    printf("================================\n");

    return 0;
}
