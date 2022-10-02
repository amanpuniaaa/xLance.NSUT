#include <stdio.h>
#include <math.h>
#define upper "abc" // upper=Macro Template 25=Macro Expansion

// macros with functionalities

#define AREA(a) ((3.14 * a * a))

int main()
{
    printf("%s", upper);
    float j;
    j = AREA(3);

    printf("The area is : %f", j);

    return 0;
}

// #define AREA(x) (3.14 * x * x)

// int main()
// {
//     float r1 = 6.25, r2 = 2.5, a;
//     a = AREA(r1);
//     printf("\nArea of circle = %f", a);
//     a = AREA(r2);
//     printf("\nArea of circle = %f", a);
// }