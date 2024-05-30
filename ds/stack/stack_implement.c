#include <stdio.h>
#include <stdlib.h>

// stack ;

typedef struct node
{
    int data;
    struct node* next;
} node;

node* make_node(int data)
{
    node* new_node = (node*) malloc (sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    
    return new_node;
}

void push (node** head, int data)
{
    if (*head == NULL)
    {
        *head = make_node (data);
        return;
    }
    node* new = make_node (data);
    new->next = *head;
    *head = new;
}

int pop (node** head)
{
    node* tmp = NULL;
    int pop;
    tmp = *head;
    pop = tmp->data;
    *head = tmp->next;
    
    free (tmp);
    
    return pop;
}

int isempty(node* head) {
    return head == NULL;
}

int main ()
{
    node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    
    for (head; head!=NULL; head = head->next)
    {
        printf ("%d ", head->data);
    }
    return 0;
}