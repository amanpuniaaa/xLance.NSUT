#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int pow;
    struct node *next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *head3 = NULL;

// utility function to create a new node
struct node *newNode(int data, int pow)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->pow = pow;
    return newNode;
}

void insertStart(int data, int pow, struct node **head)
{
    struct node *new_node = newNode(data, pow);
    new_node->next = *head;
    *head = new_node;
}

void polynomialAdd()
{
    struct node *temp1 = head1;
    struct node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->pow == temp2->pow)
        {
            insertStart(temp1->data + temp2->data, temp1->pow, &head3);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if (temp1->pow > temp2->pow)
        {
            insertStart(temp1->data, temp1->pow, &head3);
            temp1 = temp1->next;
        }
        else
        {
            insertStart(temp2->data, temp2->pow, &head3);
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL)
    {
        insertStart(temp1->data, temp1->pow, &head3);
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        insertStart(temp2->data, temp2->pow, &head3);
        temp2 = temp2->next;
    }
}

int main()
{
    // polynomial 10x^4 + 5x^2 + 9x+ 5
    insertStart(10, 4, &head1);
    insertStart(5, 2, &head1);
    insertStart(9, 1, &head1);
    insertStart(5, 0, &head1);

    // polynomial 4x^2 + x + 10
    insertStart(4, 2, &head2);
    insertStart(1, 1, &head2);
    insertStart(10, 0, &head2);

    polynomialAdd();

    struct node *temp = head3;
    while (temp != NULL)
    {
        printf("%dx^%d ", temp->data, temp->pow);
        temp = temp->next;
    }

    return 0;
}
