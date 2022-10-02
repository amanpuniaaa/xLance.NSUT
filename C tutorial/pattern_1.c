#include <stdio.h>

int main()
{
    //Solid Rectangle
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    printf("\n----------------------------------\n\n");

    //Hollow Rectangle

    for (int z = 0; z < 5; z++)
    {
        printf("*\t");
    }
    printf("\n");
    for (int m = 0; m < 4; m++)
    {
        printf("*");

        for (int n = 0; n < 4; n++)
        {
            printf("\t");
        }
        printf("*");
        printf("\n");
    }
    for (int q = 0; q < 5; q++)
    {
        printf("*\t");
    }
    printf("\n");

    return 0;
}