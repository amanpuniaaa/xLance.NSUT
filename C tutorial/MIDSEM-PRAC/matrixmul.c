#include <stdio.h>

int main()
{

    int first[10][10], second[10][10], third[10][10], i, j, k;
    int sum = 0;

    printf("Enter the first Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element for Row : %d and Column : %d : ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the second Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element for Row : %d and Column : %d : ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }
    printf("--------- Result of Matrix Multiplication ---------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }
    printf("X\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    printf("=\n");

    // Matrix Multiplication Logic

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum += (first[i][k] * second[k][j]);
            }

            third[i][j] = sum;
            sum = 0;
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", third[i][j]);
        }
        printf("\n");
    }

    return 0;
}