#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int *ptr;
    // printf("The size of int is %lu", sizeof(int)); //space int takes in memory

    // //Dyanamic Memory Allocation

    // ptr = (int *)malloc(6 * sizeof(int)); //malloc returns a void pointer so we will typecase it in int * or float *

    int n;
    char g;
    printf("How many students are there : ");
    scanf("%d", &n);

    char *arrayy;

    arrayy = (char *)malloc((n + 1) * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Grade of student %d : ", i);
        scanf("%c\n", &g);
        arrayy[i + 1] = g;
    }
    printf("-------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Grade of student %c\n : ", arrayy[i + 1]);
    }

    return 0;
}