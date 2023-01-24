




#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int value;
    struct Node* next;
};

typedef struct Stack {
    struct Node* top;
};






Stack* create() {
    Stack* p = (Stack*)malloc(sizeof(Stack));
    p->top = NULL;
    return p;
}

void push(Node* node, Stack* stack) {
    Node* top = stack->top;
    node->next = top;
    stack->top = node;
}

Node* pop(Stack* stack) {
    Node* popNode = stack->top;
    stack->top = popNode->next;
    return popNode;
}

Node* createNewNode(int value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = value;
    return node;
}


void printStack(Stack* stack) {
    Node* item = stack->top;
    while (item != NULL) {
        printf("\n%d", item->value);
        item = item->next;
        _sleep(1000);
    }
}



