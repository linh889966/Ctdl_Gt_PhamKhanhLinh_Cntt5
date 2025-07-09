#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int top;
    int cap;
} Stack;

Stack* createStack(int capacity) {
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->cap = capacity;
    stack->top = -1;
    stack->arr = (int*)malloc(sizeof(int) * capacity);
    return stack;
}

int isFull(Stack *stack) {
    return stack->top == stack->cap - 1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack bi day. Khong the them phan tu %d\n", value);
        return 0;
    }
    stack->arr[++stack->top] = value;
    return 1;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack rong. Khong the lay phan tu.\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

void printStack(Stack *stack) {
    printf("Ngan xep hien tai: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack *myStack = createStack(5);

    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);
    printStack(myStack);

    pop(myStack);
    printStack(myStack);

    push(myStack, 40);
    push(myStack, 50);
    push(myStack, 60);
    printStack(myStack);

    free(myStack->arr);
    free(myStack);

    return 0;
}
