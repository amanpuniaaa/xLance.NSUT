#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Queue Insertion and Delete
    int a;
    int queue[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Enter the no of elements : ");
    scanf("%d", &a);

    // To Delete the First Element

    for (int i = 0; i < a; i++)
    {
        queue[i] = queue[i + 1];
    }

    for (int i = 0; i < a - 1; i++)
    {
        printf("%d\t", queue[i]);
    }
    printf("\n");
    int b;
    // To Insert an element in the end
    printf("Enter the element to insert : ");
    scanf("%d", &b);
    queue[a - 1] = b;

    for (int i = 0; i < a; i++)
    {
        printf("%d\t", queue[i]);
    }
}