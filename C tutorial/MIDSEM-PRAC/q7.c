#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter the No. of Employees : ");

    scanf("%d", &n);

    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the age of employee No. %d : ", i + 1);
        scanf("%d", ptr + i);
    }
    float avg = 0;

    for (int j = 0; j < n; j++)
    {
        avg += *(ptr + j);
    }
    avg /= n;

    printf("The Average age of Employees is : %f", avg);

    return 0;
}