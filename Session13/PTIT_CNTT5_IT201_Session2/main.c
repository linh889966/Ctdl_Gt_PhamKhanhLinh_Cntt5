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
        printf("Stack bi day. Khong the them %d\n", value);
        return 0;
    }
    stack->arr[++stack->top] = value;
    return 1;
}

void printStack(Stack *stack) {
    printf("stack={\n");
    printf("  elements: [");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d", stack->arr[i]);
        if (i < stack->top) printf(", ");
    }
    printf("],\n");
    printf("  top: %d,\n", stack->top);
    printf("  cap: %d\n", stack->cap);
    printf("}\n");
}

int main() {
    Stack *myStack = createStack(5);
    int value;
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &value);
        push(myStack, value);
    }
    printStack(myStack);
    free(myStack->arr);
    free(myStack);
    return 0;
}
