#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    /**
	* Sort an array a of the length n
	*/
    double area, s;
    float arr[n];

    for (int i = 0; i < n; i++)
    {
        s = (tr[i].a + tr[i].b + tr[i].c) / 2.0;

        area = sqrt(s * (s - tr[i].a) * (s - tr[i].b) * (s - tr[i].c));
        arr[i] = area;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%f\t", arr[i]);
    }
    //Bubble Sort Logic
    double temp;
    int tempss;
    triangle temps;
    //  for(int i=0;i<2;i++){

    //         if(tr[i].a>tr[i].b){
    //             tempss=tr[i].a;
    //             tr[i].a=tr[i].b;
    //             tr[i].b=tempss;

    //         }
    //             if(tr[i].a>tr[i].c){
    //             tempss=tr[i].a;
    //             tr[i].a=tr[i].c;
    //             tr[i].c=tempss;

    //         }
    //             if(tr[i].b>tr[i].c){
    //             tempss=tr[i].b;
    //             tr[i].b=tr[i].c;
    //             tr[i].c=tempss;

    //         }
    //         }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                temps = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temps;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}