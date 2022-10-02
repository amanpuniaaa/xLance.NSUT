#include <stdio.h>

void swap(int *a, int *b);
int main()
{

    int a = 10;
    int b = 20;

    printf("%d %d\n", a, b);

    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int *temp;

    temp = *b;
    *b = *a;
    *a = temp;

    printf("This is values of a and b in function : %d %d \n", *a, *b);
}