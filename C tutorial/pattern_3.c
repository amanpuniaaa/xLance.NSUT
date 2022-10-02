#include <stdio.h>

int main()
{
    //Patterns with Numbers

    //Pattern 1

    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d\t", j + 1);
        }
        printf("\n");
    }

    printf("\n----------------------------------\n\n");

    //Pattern 2

    for (int m = 1; m < 7; m++)
    {
        for (int n = 7; n > m; n--)
        {
            printf("%d\t", 7 - n + 1);
        }
        printf("\n");
    }

    printf("\n----------------------------------\n\n");

    //Pattern 3
    //Hollow Inverted Half Pyramid
    for (int z = 1; z < 7; z++)
    {
        if (z == 1 || z == 6)
        {
            for (int zz = 7; zz > z; zz--)

            {
                printf("%d\t", 7 - zz + 1);
            }
            printf("\n");
        }
        else
        {
            printf("1\t");

            for (int k = 5; k > z; k--)
            {
                printf("\t");
            }

            printf("%d\t", 7 - z);
            printf("\n");
        }
    }

    printf("\n----------------------------------\n\n");

    //Pattern 4

    //Full Pyramid
    for (int p = 0; p < 4; p++)
    {
        for (int pi = 0; pi < 4 - p - 1; pi++)
        {
            printf("\t");
        }
        for (int piu = 0; piu < p + 1; piu++)
        {
            printf("%d\t", piu + 1 + p);
        }
        for (int piuu = 0; piuu < p; piuu++)
        {
            printf("%d\t", piuu + 1 + p);
        }
        printf("\n");
    }

    printf("\n----------------------------------\n\n");
    //Pattern 5

    //Hollow Full Pyramid
    for (int ph = 0; ph < 4; ph++)
    {
        if (ph != 3)
        {

            for (int pih = 0; pih < 4 - ph - 1; pih++)
            {
                printf("\t");
            }
            for (int piuh = 0; piuh < ph + 1; piuh++)
            {
                if (piuh == 0)
                {
                    printf("%d\t", piuh + 1);
                }
                else
                {
                    printf("\t");
                }
            }

            for (int piuuh = 0; piuuh < ph; piuuh++)
            {
                if (piuuh == ph - 1)
                {
                    printf("%d\t", ph + 1);
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
            for (int aaa = 0; aaa < 7; aaa++)
            {
                printf("%d\t", aaa + 1);
            }
        }
    }
    printf("\n----------------------------------\n\n");

    return 0;
}