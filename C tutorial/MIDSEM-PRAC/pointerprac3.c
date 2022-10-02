#include <stdio.h>
void Addone(int *ptr);
int main()
{

    int c = 10;
    Addone(&c);
    printf("%d", c);
    return 0;
}

void Addone(int *ptr)
{
    (*ptr)++;
}