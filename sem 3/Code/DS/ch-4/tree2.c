#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left;
    struct node *right;
};

struct node *createnode(int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->key = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *insertNode(struct node *root, int val) {
    if (root == NULL) {
        return createnode(val);
    }
    if (val < root->key) {
        root->left = insertNode(root->left, val);
    } else if (val > root->key) {
        root->right = insertNode(root->right, val);
    }
    return root;
}

void inorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

void preorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->key);


}

int main() {
    struct node *root = NULL;
    int choice, data, continueInput;

    do {
        printf("\n\tMenu");
        printf("\n1) Create/Insert Tree");
        printf("\n2) Display Inorder Traversal");
        printf("\n3) Display Preorder Traversal");
        printf("\n4) Display Postorder Traversal");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the value to be inserted: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                break;

            case 2:
                printf("\nInorder Traversal of the Binary Tree: ");
                inorder(root);
                printf("\n");
                break;

            case 3:
                printf("\nPreorder Traversal of the Binary Tree: ");
                preorder(root);
                printf("\n");
                break;

            case 4:
                printf("\nPostorder Traversal of the Binary Tree:");
                postorder(root);
                printf("\n");
                break;

            default:
                printf("Wrong entry. Please try again.\n");
                break;
        }

        printf("Do you want to continue? (1/0): ");
        scanf("%d", &continueInput);
    } while (continueInput == 1);


    return 0;
}
