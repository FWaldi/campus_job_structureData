//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>

struct person {
    int age;
    float weight;
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

    printf("\n============================================\n");
    printf("Akses anggota struct bertipe pointer :\n\n");
    struct person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying: \n");
    printf("Age: %d\n", personPtr->age);
    printf("Weight: %f\n", personPtr->weight);
    printf("\n============================================\n");

    return 0;
}
