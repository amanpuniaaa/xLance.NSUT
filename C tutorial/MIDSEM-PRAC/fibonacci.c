#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{

    int n;

    printf("No. of elements in Fibonacci Series : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", fibonacci(i + 1));
    }

    return 0;
}
