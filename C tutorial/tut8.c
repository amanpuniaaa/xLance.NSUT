#include <stdio.h>

int main()
{
    int num;
    int ver = 1;
    printf("Enter The number to Check Prime or Not : ");
    scanf("%d%*c", &num);

    if (num < 2)
    {
        printf("Number is neither Prime nor Composite");
    }
    if (num == 2)
    {
        printf("The Number is Prime");
    }
    else
    {
        for (int i = (num - 1);
             i > 1; i--)
        {
            if (num % i == 0)
            {
                printf("The Number  %d is not Prime \n", num);
                ver = 0;
                break;
            }
        }
        if (ver == 1)
        {
            printf("The number %d is Prime \n", num);
        }
    }

    return 0;
}