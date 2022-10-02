#include <stdio.h>

int main()
{

    //pyramid using Loop

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("----------------\n");

    for (int i = 4; i > -1; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}