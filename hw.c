#include <stdio.h>
int main()
{
    int a, b, c, d, e;

    printf("ENTER MATH MARKS :- ");
    scanf("%d", &a);

    printf("ENTER ENGLISH MARKS :- ");
    scanf("%d", &b);

    printf("ENTER PHYSICS MARKS :- ");
    scanf("%d", &c);

    printf("ENTER CHEMISTRY MARKS :- ");
    scanf("%d", &d);

    printf("ENTER BIOLOGY MARKS :- ");
    scanf("%d", &e);

    float x = (a + b + c + d + e) / 5.0;

    printf(" Average marks is %f \n", x);

    if (a > b && a > c && a > d && a > e)
    {
        printf("Your greatest marks is %d in 'MATH' \n", a);
    }
    else if (b > a && b > c && b > d && b > e)
    {
        printf("Your greatest marks is %d in 'ENGLISH'\n", b);
    }
    else if (c > a && c > b && c > d && c > e)
    {
        printf("Your greatest marks is %d in 'PHYSICS'\n", c);
    }
    else if (d > a && d > c && d > b && d > e)
    {
        printf("Your greatest marks is %d in 'CHEMISTRY'\n", d);
    }
    else if (e > a && e > c && e > b && e > d)
    {
        printf("Your greatest marks is %d in 'BIOLOGY'\n", e);
    }
    else
    {
        printf("Same marks obtained in more than one subject");
    }

    return 0;
}