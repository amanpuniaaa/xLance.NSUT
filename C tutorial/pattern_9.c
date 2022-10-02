#include <stdio.h>

int main()
{
    //Diagonals And Side of a Square
    int s = 13; //Input can only be odd number
    for (int i = 0; i < s; i++)
    {
        if (i == 0 || i == s - 1)
        {
            for (int j = 0; j < s; j++)
            {
                printf("*\t");
            }
        }
        else
        {
            for (int k = 0; k < s; k++)
            {
                if (k == i || k == (s - i - 1) || k == 0 || k == s - 1)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
