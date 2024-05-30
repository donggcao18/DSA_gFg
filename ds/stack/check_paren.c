#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[10000];
int n;

typedef struct node {
    char data;
    struct node* next;
} node;

node* make_node(char data) {
    node* new_node = (node*) malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(node** head, char data) {
    node* new = make_node(data);
    new->next = *head;
    *head = new;
}

char pop(node** head) {
    if (*head == NULL) {
        return '\0'; // Return a null character if stack is empty
    }
    node* tmp = *head;
    char pop = tmp->data;
    *head = tmp->next;
    free(tmp);
    return pop;
}

int isempty(node* head) {
    return head == NULL;
}

int isMatchingPair(char left, char right) {
    if (left == '(' && right == ')') return 1;
    if (left == '{' && right == '}') return 1;
    if (left == '[' && right == ']') return 1;
    return 0;
}

int check() {
    int i;
    node* head = NULL;

    for (i = 0; i < n; i++) {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
            push(&head, s[i]);
        } else {
            if (isempty(head))
                return 0;
            char top = pop(&head);
            if (!isMatchingPair(top, s[i]))
                return 0;
        }
    }
    return isempty(head);
}

int main() {
    scanf("%s", s);
    n = strlen(s);

    if (check())
        printf("1");
    else
        printf("0");

    return 0;
}
