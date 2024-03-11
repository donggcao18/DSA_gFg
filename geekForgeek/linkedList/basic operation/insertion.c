#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

node* push (int data, node* before)
{
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = before->next;
    before->next = ptr;
    return ptr;
}

void insert (int data, node* pre_node)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = pre_node->next;
    pre_node->next = new_node;

    new_node->data = data;
}

int main ()
{
    node* head;
    head->data = 100;
    head->next = NULL;

    node* second = push(20, head);
    node* third = push(30, second);
    node* fourth = push(40,third);

    node* ptr = head;
    insert (1000, second);

    return 0;
}