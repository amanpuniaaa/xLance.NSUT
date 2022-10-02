#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int guessnumber, num, usernum = 0, count = 0;
    int truee = 0;

    srand(time(0));

    guessnumber = rand() % 100000;

    num = guessnumber % 100 + 1;
    printf("-------You will Only get 5 Chances ------\n");

    while (count < 6)

    {
        printf("Guess a number between 1 and 100 : ");
        scanf("%d", &usernum);
        if (usernum == num)
        {
            printf("-------You Guessed The Number Correctly -------");
            break;
        }
        if (usernum < num)
        {
            printf("Your Answer is Lower Than the Actual Number \n");
            printf("Please Try Again");
        }
        if (usernum > num)
        {
            printf("Your Answer is Higher Than the Actual Number \n");
            printf("Please Try Again");
        }

        count++;
    }

    if (count == 6)
    {
        printf("------GAME OVER-------");
    }

    return 0;
}