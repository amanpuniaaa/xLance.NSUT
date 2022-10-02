#include <stdio.h>

int main()

{
    int a;
    printf("Enter an integral value : ");
    scanf("%d", &a);

    printf("The Address of your variable is : %u\n", &a);
    printf("The Value at Above Address is : %d", *(&a));

    return 0;
}