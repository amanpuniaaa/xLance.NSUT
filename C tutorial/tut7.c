#include <stdio.h>

int main()
{
    int num, mult;
    printf("Enter The Number you want multiples of : ");
    scanf("%d", &num);
    printf("Enter The Number of multiples you want : ");
    scanf("%d", &mult);

    if (num < 0 || mult < 0)
    {
        printf("Enter Number greater than 0");
    }
    else
    {
        printf("---------The First %d multiples of %d are -------------- \n", mult, num);

        for (int i = 0; i < mult; i++)
        {
            printf("%d\n", num * (i + 1));
        }
    }

    return 0;
}