#include <stdio.h>
#include <stdlib.h>

void bubble(int n, int *sort)
{

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", sort[i]);
    }
}
int main()
{
    // int sort[17] = {2, 4, 4, 6, 2, 5, 7, 2, 12, 3, 434, 64, 23, 4456, 3, 44, 7};

    int n, j;
    printf("Enter the Size of Your Array : ");
    scanf("%d", &n);

    int *sort = (int *)(malloc(n * sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element : ", i + 1);
        scanf("%d", &j);
        *(sort + i) = j;
    }

    bubble(n, sort);

    return 0;
}