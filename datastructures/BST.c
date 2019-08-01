#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void display(struct node *root)
{
    if (root != NULL)
    {
        display(root->left);
        printf("%d \n", root->key);
        display(root->right);
    }}
struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newNode(key);
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}


int main()
{
    int i;
    struct node *root = NULL;
    int n;
    printf("\nEnter no of nodes you want to create =  ");
    scanf("%d",&n);
    int a[n];

    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    root=insert(root,a[0]);
    for(int i=1;i<n;i++)
    {
        insert(root,a[i]);
    }
    display(root);
}
