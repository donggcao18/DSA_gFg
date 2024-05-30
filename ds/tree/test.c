#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* newNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int cal (int k, Node* r, int d)
{
    if (r == NULL) return 0;
    if (r->data == k) return d;
    int d1;
    d1 = cal (k, r->left, d+1);

    if (d1>0) return d1;
    return cal (k, r->right, d+1);
}

int main ()
{

    Node* root = newNode(6);
    root->left = newNode(1);
    root->right = newNode(9);
    root->left->right = newNode(4);
    root->right->left = newNode(7);
    root->right->right = newNode(8);

    root->left->right->left = newNode(2);
    root->left->right->right = newNode(5);

    root->right->right->left = newNode(3);
    root->right->right->right = newNode(10);

    int n;
    n = cal (5,root,1);

    printf ("%d", n);

    free(root->left->right->left);
    free(root->left->right->right);
    free(root->right->right->left);
    free(root->right->right->right);
    free(root->left->right);
    free(root->right->left);
    free(root->right->right);
    free(root->left);
    free(root->right);
    free(root);
    return 0;
}