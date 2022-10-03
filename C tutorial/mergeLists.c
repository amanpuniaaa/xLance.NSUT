/* The following is the code to merge two sorted arrays. It can be used as a utility in merge sort technique. */

#include <stdio.h>
#define MAX_SIZE 50

void display(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

void mergeLists(int *l1, int n1, int *l2, int n2)
{
    int i = 0, j = 0, k = 0;
    int arr[n1 + n2];
    while (i < n1 && j < n2)
    {
        if (l1[i] <= l2[j])
        {
            arr[k] = l1[i];
            i++;
        }
        else
        {
            arr[k] = l2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = l1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = l2[j];
        j++;
        k++;
    }

    printf("The merged array is:\n");
    display(arr, k);
}

int main()
{
    int n1, n2, a1[MAX_SIZE], a2[MAX_SIZE];
    printf("Enter size of first sorted array (Max=%d): ", MAX_SIZE);
    scanf("%d", &n1);
    printf("Enter the elements of first sorted array: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter size of second sorted array (Max=%d): ", MAX_SIZE);
    scanf("%d", &n2);
    printf("Enter the elements of second sorted array: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }

    mergeLists(a1, n1, a2, n2);
}
