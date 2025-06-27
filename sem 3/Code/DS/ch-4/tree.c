#include<stdio.h>
#include<stdlib.h>

struct node
{
        int key;
        struct node *left;
        struct node *right;
};

struct node *createnode(int val)
{
  struct node *newNode;

  newNode = malloc(sizeof(struct node));

  newNode->key = val ;
  newNode->left = NULL ;
  newNode->right = NULL ;
  return newNode;
};

struct node *insertNode(struct node *root,int val)
{
    if(root == NULL)
        return createnode(val);
    if(root->key<val)
        root->right = insertNode(root->right,val);
    if(root->key>val)
        root->left = insertNode(root->left,val);
    return root;

};

void preorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    printf(" %d ",root->key);

    preorder(root->left);

    preorder(root->right);

}


void main()
{
    struct node *root = NULL;

    int c,data,ch;
    do
    {
        printf("\tMenu");
        printf("\n1) Create/Insert Tree");
        printf("\n2) Display Tree");
        printf("\nEnter Your Choice:");
        scanf("%d",&c);

    switch(c)
    {
    case 1:
            printf("\nEnter the value to be inserted: ");
            scanf("%d",&data);
            root = insertNode(root,data);
            break;

    case 2:
            printf("\nPreorder Traversal of the Binary Tree");
            preorder(root);
            break;

    default :
            printf("Wrong entry");
            break;

    }

    printf("\n Do you want to continue?(1/0)");
    scanf("%d",&ch);
    }
    while ( ch == 1);

}
