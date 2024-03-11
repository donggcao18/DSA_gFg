#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

void push (node** head_ref, int data)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void reverse (node** head)
{
    node* current = *head;
    node* pre = NULL;
    node* next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    
    *head = pre;
}
int main ()
{
    int flag = 0;
    node* head = NULL;
    push(&head, 12);
    push(&head, 13);
    push(&head, 14);
    push(&head, 15);
    push(&head, 16);

    reverse(&head);
    
    while (head != NULL)
    {
        printf ("%d ", head->data);
        head = head->next;
    }

    return 0;
}