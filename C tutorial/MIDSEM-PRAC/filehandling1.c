#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ptr = NULL;

    ptr = fopen("data", "r+");

    // char c = fgetc(ptr);
    // printf("%c", c);

    // while ((d = fgetc(ptr)) != EOF)
    // {
    //     printf("%c", d);
    // }

    // char d[100];
    // fgets(d, 40, ptr);

    // printf("%s", d);

    char arr[100];
    gets(arr);
    fputs(arr, ptr);

    fclose(ptr);

    return 0;
}