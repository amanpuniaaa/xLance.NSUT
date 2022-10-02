#include <stdio.h>

int main()
{

    FILE *fp;

    char buff[255];

    fp = fopen("ao.txt", "a");

    fprintf(fp, "Hello how are you ");

    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s ", buff);
    }

    fclose(fp);

    return 0;
}