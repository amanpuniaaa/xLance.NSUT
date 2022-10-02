#include <stdio.h>
#include <stdlib.h>

int main()
{

    //use free() function to free the used memory
    //calloc() function is used for continous memory allocation

    // int *arr;

    // arr = (int *)malloc(4 * sizeof(int));
    // int j;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the Value :");
    //     scanf("%d", &j);
    //     arr[i] = j;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf(" The Values are : %d\n", arr[i]);
    // }

    // free(arr); //frees the memory taken by array

    //Use of calloc . It initializes the array with the element 0. But this is slower than malloc so only use this when the case requires

    int *calarr = (int *)calloc(5, sizeof(int));

    int j;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the Value :");
        scanf("%d", &j);
        calarr[i] = j;
    }

    for (int i = 0; i < 5; i++)
    {
        printf(" The Values are : %d\n", calarr[i]);
    }
    //see how it takes the last  value as 0 automatically

        return 0;
}