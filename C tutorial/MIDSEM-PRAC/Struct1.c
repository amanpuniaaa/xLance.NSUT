#include <stdio.h>

int strcmp(char *s, char *t)
{
    int i;
    for (i = 0; s[i] == t[i]; i++)
    {
        if (s[i] == '\0')
            return 0;
    }
    return s[i] - t[i];
}

int strcmpptr(char *s, char *t)
{
    int i;
    for (i = 0; *(s + i) == *(t + i); i++)
    {
        if (*(s + i) == '\0')
        {
            return 0;
        }
    }
    return *(s + i) - *(t + i);
}
int main()
{
    int d;
    char start[] = "Hefllo";
    char end[] = "Hello";
    d = strcmpptr(start, end);
    printf("%d", d);

    return 0;
}