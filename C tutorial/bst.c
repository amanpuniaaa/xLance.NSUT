/* The following is a complete binary search tree program having utility functions to seach, insert, traverse and delete nodes in
a binary search tree */

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *search(struct node *root, int key)
{
    if (root == NULL || root->data == key)
        return root;

    if (root->data < key)
        return search(root->right, key);

    return search(root->left, key);
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d \n", root->data);
    }
}

struct node *insertNode(struct node *root, int num)
{
    if (root == NULL)
    {
        return newNode(num);
    }
    if (num < root->data)
        root->left = insertNode(root->left, num);
    else if (num > root->data)
        root->right = insertNode(root->right, num);

    return root;
}

struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    struct node *root = NULL;
    int choice;
    while (1)
    {
        printf("\n\n1.Display the tree (inorder)\n");
        printf("2.Add a node\n");
        printf("3.Delete a node\n");
        printf("4.Search a node\n");
        printf("5.Post order display\n");
        printf("6.exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (root == NULL)
            {
                printf("Tree is empty");
                break;
            }
            inorder(root);
            break;
        case 2:
        {
            int num;
            printf("Enter data to insert: ");
            scanf("%d", &num);
            root = insertNode(root, num);
            break;
        }
        case 3:
        {
            int num;
            printf("Enter data to delete: ");
            scanf("%d", &num);
            if (root->left == NULL && root->right == NULL)
            {
                if (root->data == num)
                {
                    free(root);
                    printf("Done!");
                    root = NULL;
                }
                else
                {
                    printf("Node not found.");
                }
            }
            else
            {
                struct node *result = deleteNode(root, num);

                if (result == NULL)
                {
                    printf("Node not found. Sorry :(");
                }
                else
                {
                    printf("Node found and deleted! :)");
                }
            }
            break;
        }
        case 4:
        {
            int num;
            printf("Enter data to search: ");
            scanf("%d", &num);
            struct node *result = search(root, num);
            if (result == NULL)
            {
                printf("Node not found. Sorry :(");
            }
            else
            {
                printf("Node found! :)");
            }
            break;
        }
        case 5:
            postorder(root);
            break;
        case 6:

            exit(1);
            break;
        default:
            printf("incorrect value entered");
        }
    }
    return 0;
}