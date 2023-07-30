//Dibuat_oleh_Fitri-Waldi_NIM-22343021

#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef struct {
    char data[MAX_STACK_SIZE];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isStackEmpty(Stack *s) {
    return s->top == -1;
}

int isStackFull(Stack *s) {
    return s->top == MAX_STACK_SIZE - 1;
}

void push(Stack *s, char c) {
    if (isStackFull(s)) {
        printf("Stack is full.\n");
        return;
    }
    s->top++;
    s->data[s->top] = c;
}

char pop(Stack *s) {
    if (isStackEmpty(s)) {
        printf("Stack is empty.\n");
        return '\0';
    }
    char c = s->data[s->top];
    s->top--;
    return c;
}

void reverseString(char *str) {
    Stack s;
    initStack(&s);

    for (int i = 0; i < strlen(str); i++) {
        push(&s, str[i]);
    }

    for (int i = 0; i < strlen(str); i++) {
        str[i] = pop(&s);
    }
}

int main() {
    char str[MAX_STACK_SIZE];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Input Kata\n");
        printf("2. Balik Kata\n");
        printf("3. Exit\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan kata: ");
                scanf("%s", str);
                break;
            case 2:
                reverseString(str);
                printf("Kata terbalik: %s\n", str);
                break;
            case 3:
                printf("Terima kasih.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
