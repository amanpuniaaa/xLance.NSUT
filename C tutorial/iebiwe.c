#include <stdio.h>

int main()
{

    for (int x = 1; x <= 10; x = x + 1)
    {

        if (x == 5)
            continue;
        printf("%d ", x);
    }

    return 0;
}