#include <stdio.h>

int main()
{
    // Star pyramid Patterns

    //Pattern 1

    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n----------------------------------\n\n");

    //Pattern 2

    for (int m = 1; m < 7; m++)
    {
        for (int n = 7; n > m; n--)
        {
            printf("*");
        }
        printf("\n");
    }

    //Pattern 3
    printf("\n----------------------------------\n\n");

    //Hollow Inverted Half Pyramid
    for (int z = 1; z < 7; z++)
    {
        if (z == 1 || z == 6)
        {
            for (int zz = 7; zz > z; zz--)

            {
                printf("*\t");
            }
            printf("\n");
        }
        else
        {
            printf("*\t");

            for (int k = 5; k > z; k--)
            {
                printf("\t");
            }

            printf("*\t");
            printf("\n");
        }
    }

    //Pattern 4
    printf("\n----------------------------------\n\n");

    //Full Pyramid
    for (int p = 0; p < 4; p++)
    {
        for (int pi = 0; pi < 4 - p - 1; pi++)
        {
            printf("\t");
        }
        for (int piu = 0; piu < p + 1; piu++)
        {
            printf("*\t");
        }
        for (int piuu = 0; piuu < p; piuu++)
        {
            printf("*\t");
        }
        printf("\n");
    }

    //Pattern 5
    printf("\n----------------------------------\n\n");

    //Full Inverted Pyramid
    for (int pz = 0; pz < 4; pz++)
    {
        for (int piz = 4; piz > 4 - pz; piz--)
        {
            printf("\t");
        }
        for (int piuz = 4; piuz > pz + 1; piuz--)
        {
            printf("*\t");
        }
        for (int piuuz = 4; piuuz > pz; piuuz--)
        {
            printf("*\t");
        }
        printf("\n");
    }

    //Pattern 5
    printf("\n----------------------------------\n\n");

    //Hollow  Pyramid
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
                    printf("*\t");
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
            for (int aaa = 0; aaa < 7; aaa++)
            {
                printf("*\t");
            }
        }
    }

    return 0;
}