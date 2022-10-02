#include <stdio.h>

int main()
{

    //Palindrone Patterns

    //Pattern 1

    // for (int i = 1; i < 11; i += 2)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (j > i / 2)
    //         {
    //             printf("%d\t", );
    //         }
    //         else
    //         {
    //             printf("%d\t", j + 1);
    //         }
    //     }
    //     printf("\n");
    // }
    int i, j, k, l;
    int n = 4;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (l = i - 1; l >= 1; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    printf("\n----------------------------------\n\n");

    //Palindrome with Alphabets
    //Pattern 2

    for (int l = 1; l < 5; l++)
    {
        for (int li = 1; li < l + 1; li++)
        {
            printf("%c\t", 64 + li);
        }
        for (int lo = l - 1; lo > 0; lo--)
        {
            printf("%c\t", 64 + lo);
        }

        printf("\n");
    }
    printf("\n----------------------------------\n\n");

    //Patteern 3
    // Palindrome Pyramid

    for (int p = 1; p < 6; p++)
    {
        for (int ps = 0; ps < 5 - p; ps++)
        {
            printf("\t");
        }
        for (int pi = 0; pi < p; pi++)
        {
            printf("%d\t", pi + 1);
        }
        for (int po = p - 1; po > 0; po--)
        {
            printf("%d\t", po);
        }
        printf("\n");
    }
    printf("\n----------------------------------\n\n");

    //Pattern 4

    //Star Pyramid

    for (int s = 1; s < 6; s++)
    {
        for (int ss = 0; ss < 9 - s; ss++)
        {
            printf("*");
        }
        for (int sm = 1; sm < s + 1; sm++)
        {
            printf("%d", s);
            if (sm != s)
            {
                printf("*");
            }
        }

        for (int sss = 0; sss < 9 - s; sss++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}