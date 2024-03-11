#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} node;
node* tail;

void insert(int data)
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    tail->next = new_node;
    new_node->next = NULL;
    tail = new_node;
}

void get_node (int position, node* head)
{
    node* current = head;
    int i;
    for (i=1; i<=position; i++)
    {
        current = current->next;
    }

    printf ("%d ", current->data);
}
int main ()
{
    node* head;
    head->data = 100;
    head->next =NULL;
    tail = head;

    insert(20);
    insert(30);
    insert(40);
    insert(50);

    get_node(2,head);
    return 0;
}