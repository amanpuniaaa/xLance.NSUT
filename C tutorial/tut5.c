#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter Your Marks out of 100 : ");
    scanf("%d%*c", &marks);

    if (marks > 100 || marks < 0)
    {
        printf("Please Enter Correct Marks");
        main();
    }
    if (marks > 90 && marks < 100)
    {
        printf("Your Grade is : A");
    }
    if (marks > 80 && marks <= 90)
    {
        printf("Your Grade is : B");
    }
    if (marks > 70 && marks <= 80)
    {
        printf("Your Grade is : C");
    }
    if (marks > 60 && marks <= 70)
    {
        printf("Your Grade is : D");
    }
    if (marks > 50 && marks <= 60)
    {
        printf("Your Grade is : E");
    }
    if (marks < 50)
    {
        printf("You Failed the Subject");
    }

    return 0;
}