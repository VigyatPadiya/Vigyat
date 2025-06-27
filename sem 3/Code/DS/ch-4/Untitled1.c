#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Declare root as a pointer to struct node
struct node *root = NULL;

struct node *createnode(int val) {
    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = val;  // Assign the value to newNode->data
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *insertNode(struct node *root, int val) {
    if (root == NULL) {
        return createnode(val);
    }
    if (val < root->data) {
        root->left = insertNode(root->left, val);
    } else if (val > root->data) {
        root->right = insertNode(root->right, val);
    }
    return root;
}

void preorder(struct node *root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);  // Print the current node's data
    preorder(root->left);
    preorder(root->right);
}

// Function to free the memory allocated for the tree
void freeTree(struct node *root) {
    if (root == NULL)
        return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() {  // Return type should be int
    int c, data, ch;
    do {
        printf("\tMenu");
        printf("\n1) Create/Insert Tree");
        printf("\n2) Display Tree");
        printf("\nEnter Your Choice: ");


        switch (c) {
            case 1:
                printf("Enter the value to be inserted: ");
                if (scanf("%d", &data) != 1) {
                    fprintf(stderr, "Invalid input. Please enter a number.\n");
                    return EXIT_FAILURE;  // Exit on invalid input
                }
                root = insertNode(root, data);  // Pass root to insertNode
                break;

            case 2:
                printf("\nPreorder Traversal of the Binary Tree: ");
                preorder(root);
                printf("\n");  // New line after traversal
                break;

            default:
                printf("Wrong entry\n");
                break;
        }

        printf("\nDo you want to continue? (1/0): ");
        if (scanf("%d", &ch) != 1) {
            fprintf(stderr, "Invalid input. Please enter a number.\n");
            return EXIT_FAILURE;  // Exit on invalid input
        }
    } while (ch == 1);

    // Free the allocated memory for the tree
    freeTree(root);

    return 0;  // Return success
}
