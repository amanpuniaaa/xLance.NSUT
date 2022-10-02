#include <stdio.h>

int main()
{
    ///Arrays
    //Creating a 2D Array
    int a, b, c;
    printf("Enter the Dimesions of your 2D Array : ");
    scanf("%d%*c%d", &a, &b);

    int twod[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter digit %d of part %d: ", j + 1, i + 1);
            scanf("%d", &c);
            twod[i][j] = c;
        }
    }

    printf("------YOUR 2-D Array is------\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", twod[i][j]);
        }
        printf("\n");
    }
    return 0;
}