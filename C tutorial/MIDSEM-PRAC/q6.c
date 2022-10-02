#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    printf("Enter the String : ");
    scanf("%s", str);

    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    printf("The lenght of the String is : %d\n ", i);

    // To reverse the String
    char temp;

    for (int j = 0; j < i / 2; j++)
    {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    printf("The reversed String is : %s", str);

    return 0;
}