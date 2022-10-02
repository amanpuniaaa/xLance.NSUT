#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = n - 1; i > 1; i--)
        {
            n = n * i;
        }
        return n;
    }
}
int binomial(int a, int b)
{
    int z;
    z = factorial(a) / (factorial(a - b) * factorial(b));
    return z;
}

int main()
{

    int rows = 7, d;
    for (int i = 1; i < rows + 1; i++)
    {
        for (int k = 0; k < rows - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            d = binomial(i - 1, j);
            printf("%d ", d);
        }
        printf("\n");
    }

    return 0;
}
