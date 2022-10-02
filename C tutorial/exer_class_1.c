#include <stdio.h>
void main(void)
{
    int i, j, z, m;
    i = 1;
    while (i <= 5)
    {
        j = 1;
        m = 5 - i + 1;
        while (m > 1)
        {
            printf("\t");
            m = m - 1;
        }
        j = 1;
        while (j <= i)
        {
            printf("\t%d", j);
            j = j + 1;
        }
        z = i - 1;
        while (z >= 1)
        {
            printf("\t%d", z);
            z = z - 1;
        }
        printf("\n");
        i = i + 1;
    }
}