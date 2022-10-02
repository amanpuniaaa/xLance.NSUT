#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    int i = 8;
    int *j;
    j = &i;
    printf("Add i = % u\n", &i);
    printf("Add i = % u\n", j);
    printf("Add j = % u\n", &j);
    printf("Value i = % d\n", i);
    printf("Value i = % d\n", *(&i));
    printf("Value j = % d\n", *(&j));

    int a = 5, b = 10;

    // return 0;

    printf("The Values of a and b are %d and %d\n ", a, b);

    swap(&a, &b);
    printf("The Values of a and b are %d and %d ", a, b);
}

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
