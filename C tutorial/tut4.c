#include <stdio.h>

int main()
{
    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d %d\n", a + b, a - b);
    printf("%0.1f %0.1f", c + d, c - d); //0.1 here means only 1 decimal place in the float value

    return 0;
}