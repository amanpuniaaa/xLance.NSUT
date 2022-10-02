#include <stdio.h>

int main()
{

    // Basic Pyramid in C
    //  for (int i = 1; i < 6; i++)
    //  {
    //      for (int j = 1; j < 6 - i; j++)
    //      {
    //          printf("  ");
    //      }

    //     for (int k = 0; k < i; k++)
    //     {
    //         printf("* ");
    //     }
    //     for (int m = 1; m < i; m++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    int ptr[10], count;
    ptr[0] = 1;
    // Pascal Trinagle in C
    for (int i = 1; i < 6; i++)
    {
        for (int m = 1; m < 6 - i; m++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                count = 1;
                printf("1 ");
            }
            else
            {
                count = ptr[j - 1] + ptr[j];
                printf("%d ", count);
            }
            ptr[j] = count;
        }
        printf("\n");
    }

    return 0;
}