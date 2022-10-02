#include <stdio.h>

int main()
{
    int n, m, a, b, c, k, x;
    // scanf("%d", &n);
    n = 11;
    k = n;

    m = 2 * n - 1;

    for (int i = 0; i < m; i++)

    {
        for (int j = 0; j < m; j++)
        {
            if (i < n - 1)
            {
                if (i == 0)
                {
                    printf("%d ", k);
                }
                else if (i >= 1)
                {
                    if (j <= i)
                    {
                        printf("%d ", k - j);
                    }
                    else if (j > i && j < m - i)
                    {
                        printf("%d ", k - i);
                    }
                    else
                    {
                        printf("%d ", j - k + 2);
                    }
                }
            }
            else if (i == n - 1)
            {
                if (k > j)
                {
                    printf("%d ", k - j);
                }
                else
                {
                    printf("%d ", j - k + 2);
                }
            }
            else if (i > n - 1)
            {
                x = m - i - 1;
                if (i == m)
                {
                    printf("%d ", k);
                }
                if (j < x)
                {
                    printf("%d ", k - j);
                }
                else if (j >= x && j < m - x)
                {
                    printf("%d ", k - x);
                }
                else
                {
                    printf("%d ", (j - k + 1) + 1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}