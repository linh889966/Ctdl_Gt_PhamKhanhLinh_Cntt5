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

int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Ngan xep trong\n");
        return -1;
    }
    Node* temp = stack->top;
    int popped = temp->data;
    stack->top = temp->next;
    free(temp);
    return popped;
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
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);

    printf("Stack hien tai\n");
    printStack(stack);

    int value = pop(stack);
    if (value != -1) {
        printf("Da lay phan tu %d khoi ngan xep\n", value);
    }

    printf("Stack sau khi pop\n");
    printStack(stack);

    return 0;
}
