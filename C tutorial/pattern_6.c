#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Pascal's Triangle
    int *arr = (int *)malloc(1 * sizeof(int));
    int *temp = (int *)malloc(1 * sizeof(int));

    arr[0] = 1;

    for (int i = 0; i < 7; i++)

    {

        for (int c = 0; c < i + 1; c++)
        {
            if (c == 0 || c == i)
            {

                arr[c] = 1;

                printf("%d\t", arr[c]);
            }
            else

            {
                int new = temp[c] + temp[c - 1];
                arr[c] = temp[c] + temp[c - 1];

                printf("%d\t", new);
            }
        }

        printf("\n");
        arr = (int *)realloc(arr, i + 2);
        temp = (int *)realloc(temp, i + 2);
        for (int m = 0; m < i + 2; m++)
        {
            temp[m] = arr[m];
        }
    }

    printf("\n----------------------------------\n\n");

    return 0;
}