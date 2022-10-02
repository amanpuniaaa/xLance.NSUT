// #include <stdio.h>

// void stringg();
// void stringg()
// {
//     printf("This is Stringg \n");
// }
// int summ(a, b)
// {
//     int c;
//     return c = a + b;
// }
// int main()
// {

//     int a, b;
//     printf("Enter The 1st Number : ");
//     scanf("%d", &a);

//     printf("Enter The 2nd Number : ");
//     scanf("%d", &b);

//     int c = summ(a, b);

//     printf("The sum is %d\n", c);

//     stringg();
//     //Recursion for Factorial
//     return 0;
// }

#include <stdio.h>

int factorial(n)
{
    int c;
    if (n > 1)
    {
        c = n * factorial(n - 1);
        return c;
    }
    if (n == 1 || n == 0)
    {
        return 1;
    }
}

int main()
{

    int n;
    printf("Enter the number you want the factorial of : ");
    scanf("%d", &n);

    int d = factorial(n);
    printf("%d", d);
    return 0;
}