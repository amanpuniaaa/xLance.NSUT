#include <stdio.h>

int main()

{
    int whileconst = 10;
    int dow = 100;

    printf("-------This is For Loop--------");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    printf("-------This is While Loop--------\n");

    while (whileconst > 0)
    {
        printf("%d\n", whileconst);
        whileconst--;
    }

    printf("-------This is Do While Loop--------\n");

    do
    {

        printf("%d\n", dow);
        dow -= 10;

    } while (
        dow > 100

    );

    return 0;
}