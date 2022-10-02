#include <stdio.h>

int main()
{
    //Floyd Triangle
    int cm = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int c = 0; c < i + 1; c++)
        {
            printf("%d\t", 1 + cm);
            cm++;
        }

        printf("\n");
    }

    printf("\n----------------------------------\n\n");

    return 0;
}