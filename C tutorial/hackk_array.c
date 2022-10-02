#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    int temp[num];

    for (i = 0; i < num; i++)
    {
        temp[i] = *(arr + num - 1 - i);
    }
    free(arr);
    arr = temp;

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}