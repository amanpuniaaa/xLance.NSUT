#include <stdio.h>
#include <string.h>

int main()
{
    char a[30], d;
    int m = 0;

    printf("Enter a String : ");
    gets(a);
    printf("Enter the Letter to Find : ");
    scanf("%c", &d);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == d)
        {
            printf("The String contains the letter %c at index %d", d, i);
            m = 1;
            break;
        }
    }
    if (m == 0)
    {
        printf("The string Does Not Contain the letter %c", d);
    }

    return 0;
}