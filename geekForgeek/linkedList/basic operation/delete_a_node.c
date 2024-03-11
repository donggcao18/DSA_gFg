#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;

void push(node** head_ref, int data)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = *head_ref;

    *head_ref = new_node;
}

void delete_a_node(int position, node* head)
{
    int flag = 1;
    node* current = head->next;
    node* pre = head;
    while (position != flag)
    {
        pre = current;
        current = current->next;
        flag++;
    }
    pre->next = current->next;
    free(current);

}
int main ()
{
    node* head = NULL;
    push(&head, 12);
    push(&head, 13);
    push(&head, 14);
    push(&head, 15);
    push(&head, 16);

    delete_a_node(2, head);

    node* current = head;
    while (current != NULL)
    {
        printf ("%d ", current->data);
        current = current->next;
    }

    return 0;
}