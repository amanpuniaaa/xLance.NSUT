#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{

    char s[MAX];
    int i;
    gets(s);

    while (*(s + i) != '\0')
    {
        i++;
    }
    // for (i = 0; *(s + i) != '\0'; i++)
    //     ;

    printf("Length of the string: %d", i);

    return 0;
}