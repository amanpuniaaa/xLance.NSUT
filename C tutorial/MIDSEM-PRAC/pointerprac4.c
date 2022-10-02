#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str[100];
    char temp;

    printf("Enter your String : ");

    gets(str);

    // String Reversing using pointers
    int d = strlen(str);

    for (int i = 0; i < d / 2; i++)
    {
        temp = *(str + i);
        *(str + i) = *(str + d - 1 - i);
        *(str + d - i - 1) = temp;
    }

    printf("The reversed String is : ");
    puts(str);

    return 0;
}