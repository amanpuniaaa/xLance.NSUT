#include <stdio.h>

enum week
{

    Sunday,
    Hello = 20,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,

} tom;

int main()
{
    // creating today variable of enum week type

    // enum week tom;
    tom = Monday;
    printf("Day %d", tom);
    return 0;
}