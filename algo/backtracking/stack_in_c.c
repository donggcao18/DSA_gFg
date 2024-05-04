#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack* next;
} stack;

void push_back(stack** head, int data)
{
    stack* new_node = (stack*)malloc (sizeof(stack));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node; 
}

void pop_back(stack** head)
{
    if (*head == NULL)
        return;

    stack* tmp = *head;
    *head = (*head)->next;
    free(tmp);
}


int main()
{
    stack* head = NULL;
    push_back(&head, 10);
    push_back(&head, 15);

    return 0;
}