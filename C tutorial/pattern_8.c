#include <stdio.h>

int main()
{

    //ButterFly Pattern Printing
    for (int i = 1; i < 9; i++)
    {
        if (i != 9)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*\t");
            }
            for (int k = 7; k > i; k--)
            {
                printf("\t");
                printf("\t");
            }

            for (int l = 0; l < i; l++)
            {
                printf("*\t");
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < i - 1; j++)
            {
                printf("*\t");
            }
            for (int k = 7; k > i - 1; k--)
            {
                printf("\t");
                printf("\t");
            }

            for (int l = 0; l < i - 1; l++)
            {
                printf("*\t");
            }
            printf("\n");
        }
    }
    printf("hello\n");
    for (int ir = 1; ir < 10; ir++)
    {
        if (ir != 1)
        {
            for (int jr = 9; jr > ir; jr--)
            {
                printf("*\t");
            }
            for (int kr = 0; kr < ir; kr++)
            {
                printf("\t");
                printf("\t");
            }

            for (int lr = 9; lr > ir; lr--)
            {
                printf("*\t");
            }
        }
        else
        {
            for (int jr = 8; jr > ir + 1; jr--)
            {
                printf("*\t");
            }
            for (int kr = 0; kr < ir + 1; kr++)
            {
            }

            for (int lr = 8; lr > ir + 1; lr--)
            {
                printf("*\t");
            }
        }

        printf("\n");
    }

    return 0;
}