#include <stdio.h>

int main()
{

    float a, b;

    printf("Enter the Dividend : ");
    scanf("%f", &a);

    printf("Enter the Divisor : ");
    scanf("%f", &b);

    if (b == 0)
    {
        printf("Divisor cannot be 0 !! Please Try Again \n");
        main();
    }
    else
    {
        printf(" The quotient of the above problem is : %f ", a / b);
    }

    return 0;
}