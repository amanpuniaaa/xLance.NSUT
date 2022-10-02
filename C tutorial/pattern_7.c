#include <stdio.h>

int main()
{

    //Hollow Diamond Inscribed in a Rectangle

    for (int i = 1; i < 7; i++)
    {
        printf("\n");
        for (int j = 6; j > i; j--)
        {
            printf("*\t");
        }
        for (int im = 1; im < i; im++)
        {
            if (i != 6)
            {
                printf("\t");
                printf("\t");
            }
            else
            {
                continue;
            }
        }

        for (int k = 6; k > i; k--)
        {
            printf("*\t");
        }
    }

    for (int ib = 6; ib > 0; ib--)
    {
        for (int jb = 6; jb > ib; jb--)
        {
            printf("*\t");
        }
        for (int imb = 1; imb < ib; imb++)
        {
            printf("\t");
            printf("\t");
        }

        for (int kb = 6; kb > ib; kb--)
        {
            printf("*\t");
        }

        printf("\n");
    }

    printf("\n----------------------------------\n\n");

    return 0;
}