#include <stdio.h>

main()
{
    FILE *fp;
    fp = fopen("ao.txt", "w");

    // fprintf(fp, "This was a nice edit");

    fputc('h', fp);

    // fgets(variable,lenght,file)

    fclose(fp);
}

// #include <stdio.h>
// main()
// {
//     FILE *fp;
//     fp = fopen("file1.txt", "w"); // opening file
//     fputc('a', fp);               // writing single character into file
//     fclose(fp);                   // closing file
// }