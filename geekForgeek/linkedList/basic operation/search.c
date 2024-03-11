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
    ptr->next = before->next;
    before->next = ptr;
    ptr->data = data;

    return ptr;
}

void search (int search, node* ptr)
{
    int flag = 0;
    while (ptr != NULL)
    {
        if (search == ptr->data)
        {
            flag = 1;
        }
        ptr = ptr->next;
    }

    if (flag == 0)
    {
        printf ("NO");
    }
    else
    {
        printf ("YES");}
}

int main ()
{
    node* head;
    head->data = 100;
    head->next = NULL;

    node* second = push(12, head);
    node* third = push(16, second);
    node* fourth = push(24, third);

    node* ptr = head;
    search (13, ptr);
    return 0;
}