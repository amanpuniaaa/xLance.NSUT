#include <stdio.h>

int main()
{
    // Creating a Database using Arrays and Structs

    struct Address
    {
        int Street_No;
        char city[30];
        char district[30];
        char state[30];
    };

    struct DataBase
    {

        char Emp_Name[30];
        int Emp_Age;
        char Emp_Degree[30];
        float Emp_Exp;
        struct Address Emp_Add;
    } Data;

    struct DataBase arr[100];

    int n;
    printf("Enter the Number Of Employees : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Name of Employee : ");
        scanf("%s", Data.Emp_Name);

        printf("Enter the Age of Employee : ");
        scanf("%d", &Data.Emp_Age);

        printf("Enter the Degree of Employee : ");
        scanf("%s", Data.Emp_Degree);

        printf("Enter the Experience of Employee : ");
        scanf("%f", &Data.Emp_Exp);

        printf("Enter the Address of Employee : (Street_No City District State) ");
        scanf("%d %s %s %s ", &Data.Emp_Add.Street_No, Data.Emp_Add.city, Data.Emp_Add.district, Data.Emp_Add.state);

        arr[i] = Data;
    }

    for (int j = 0; j < n; j++)
    {
        printf("%s\n", arr[j].Emp_Name);
    }

    return 0;
}