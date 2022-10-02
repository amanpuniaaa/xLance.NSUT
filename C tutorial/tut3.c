#include <stdio.h>

int main()
{

    // char ch, s[20], sentence[100];
    // printf("Type a single character : ");
    // scanf("%c", &ch);
    // printf("Type a single word : ");
    // scanf("%s%*c", &s);
    // printf("Type a single sentence : ");
    // scanf("%[^\n]", &sentence); // %[^\n] piece of code here means that take the code until the new line is encountered using XOR.
    // //%*c at the end here means that it reads newline and * ensures that the scan dont take the newline as the input

    // printf("The letter ,word ,sentence respectively are %c,%s,%s", ch, s, sentence);

    // return 0;

    int dd, mm, yy;
    printf("Enter The Date : ");
    scanf("%d %*c %d %*c %d", &dd, &mm, &yy);

    printf("\n\tThe date is : %d %d %d", dd, mm, yy);
}