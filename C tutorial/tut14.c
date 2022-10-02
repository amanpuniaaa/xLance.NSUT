#include <stdio.h>
//Reversing Array
int main()
{
    int arr[5], a;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter integer No. %d :", i + 1);
        scanf("%d", &a);
        arr[i] = a;
    }
    //Reversal Algorithm
    int revarr[5], b;
    for (int i = 0; i < 5; i++)
    {
        revarr[i] = arr[4 - i];
    }
    //Showing the Array
    printf("Original Array Was :");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d\t", arr[i]);
    }
    printf("\n");
    printf("Reversed Array is :");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", revarr[i]);
    }

    return 0;
}