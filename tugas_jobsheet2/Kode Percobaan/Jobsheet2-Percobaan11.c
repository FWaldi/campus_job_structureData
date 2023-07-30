//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

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
    printf("Struct Penambahan Jarak :\n\n");
    struct Distance dist1, dist2, sum;

    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inches: ");
    scanf("%f", &dist1.inch);

    printf("Enter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inches: ");
    scanf("%f", &dist2.inch);

    // adding feet
    sum.feet = dist1.feet + dist2.feet;

    // adding inches
    sum.inch = dist1.inch + dist2.inch;

    // changing to feet if inch is greater than 12
    while (sum.inch >= 12) {
        ++sum.feet;
        sum.inch = sum.inch - 12;
    }

    printf("Sum of distances: %d' - %.1f\"\n", sum.feet, sum.inch);
    printf("==============================\n");

    return 0;
}
