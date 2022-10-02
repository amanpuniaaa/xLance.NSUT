#include <stdio.h>
int main()
{
    int i = 1, p, x = 2, j, f;
    while (i <= 3)
    {
        f = 1;
        j = i;
        while (j >= 1)
        {
            f = f * j;
            j = j - 1;
        }
        p = 1;
        j = i;
        while (j >= 1)
        {
            p = p * x;
            j = j - 1;
        }
        printf("%d %d \n", p, f);
        i = i + 1;
    }
    return 0;
}