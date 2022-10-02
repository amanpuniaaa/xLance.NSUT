#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    printf("The next 5 Even Numbers are");

    for (int i = a + 1; i < a + 12; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    printf("The next 5 Odd Numbers are");

    for (int i = a; i < a + 11; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}