#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

void printStack(Stack* stack) {
    Node* current = stack->top;
    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Stack* stack = createStack();
    push(stack, 5);
    push(stack, 4);
    push(stack, 3);
    push(stack, 2);
    push(stack, 1);

    int x;
    printf("Nhap so can them vao ngan xep: ");
    scanf("%d", &x);

    push(stack, x);
    printStack(stack);

    return 0;
}
