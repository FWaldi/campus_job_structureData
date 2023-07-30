//DibuatOleh_22343021_FitriWaldi
#include <stdio.h>

struct level_5 {
    int level_5_int;
};

struct level_4 {
    struct level_5 l5;
    float level_4_float;
};

struct level_3 {
    struct level_4 l4;
    double level_3_double;
};

struct level_2 {
    struct level_3 l3;
    char level_2_char;
};

struct level_1 {
    struct level_2 l2;
    short level_1_short;
};

int main() {
    struct level_1 l1;
    l1.level_1_short = 10;
    l1.l2.level_2_char = 'a';
    l1.l2.l3.level_3_double = 10.5;
    l1.l2.l3.l4.level_4_float = 20.25;
    l1.l2.l3.l4.l5.level_5_int = 30;

    printf("Level 1 short: %d\n", l1.level_1_short);
    printf("Level 2 char: %c\n", l1.l2.level_2_char);
    printf("Level 3 double: %f\n", l1.l2.l3.level_3_double);
    printf("Level 4 float: %f\n", l1.l2.l3.l4.level_4_float);
    printf("Level 5 int: %d\n", l1.l2.l3.l4.l5.level_5_int);

    return 0;
}
