#include <stdio.h>

int main()
{

    // Diagonal & Sides of a Rhombus/Diamond
    //Input can be odd number only

    int s = 7;
    for (int i = 0; i < s; i++)
    {
        if (i != s - 1)
        {
            for (int j = s; j > i + 1; j--)
            {
                printf("\t");
            }
            for (int k = 0; k < i + 1; k++)
            {
                if (k == 0 || k == i)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            for (int m = 1; m < i + 1; m++)
            {
                if (m == i)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        else
        {
            for (int j = s; j > i + 1; j--)
            {
                printf("\t");
            }
            for (int k = 0; k < i + 1; k++)
            {

                printf("*\t");
            }
            for (int m = 1; m < i + 1; m++)
            {

                printf("*\t");
            }
            printf("\n");
        }
    }

    for (int m = 1; m < s; m++)
    {
        for (int n = 0; n < m; n++)
        {
            printf("\t");
        }
        for (int k = s + 1; k > m + 1; k--)
        {
            if (k == s + 1 || k == m + 2)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        for (int l = s; l > m + 1; l--)
        {
            if (l == m + 2)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}