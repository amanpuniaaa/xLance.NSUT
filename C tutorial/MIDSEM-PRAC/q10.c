#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct Address
    {
        char name[30];

        char street[20];

        char city[20];

        char state[20];

        int zip;
    } mailing;

    struct Address list[100];
    int n;

    printf("Which Command Do you want to Run ? . \n");
    printf("Press 1 to Show all Addresses :\n");
    printf("Press 2 to Add an Address :\n");
    printf("Press 3 to Delete an Address :");
    scanf("%d", &n);

    switch (n)
    {
    case 1:

        break;
    case 2:
        printf("Enter your Name : ");
        scanf("%s", mailing.name);
        printf("Enter your Street : ");
        scanf("%s", mailing.street);
        printf("Enter your City : ");
        scanf("%s", mailing.city);
        printf("Enter your State : ");
        scanf("%s", mailing.state);
        printf("Enter your Zip Code : ");
        scanf("%d", &mailing.zip);

        printf("Your Address has been added Successfully \n");
    case 3:

    default:

        main();
    }

    list[0] = mailing;
    return 0;
}