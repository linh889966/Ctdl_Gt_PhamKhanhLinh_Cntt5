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

int push(Stack *stack, int value) {
    if (stack->top == stack->cap - 1) return 0;
    stack->arr[++stack->top] = value;
    return 1;
}

void traverseStack(Stack *stack) {
    for (int i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->arr[i]);
    }
}

int main() {
    Stack *myStack = createStack(5);
    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);
    push(myStack, 40);
    push(myStack, 50);

    traverseStack(myStack);

    free(myStack->arr);
    free(myStack);
    return 0;
}
