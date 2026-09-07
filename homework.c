#include <stdio.h>
int main()
{

    int a, b;

    printf("ENTER YOUR 1st NUMBER :- ");
    scanf("%d", &a);

    printf("ENTER YOUR 2nd NUMBER :- ");
    scanf("%d", &b);

    // if (a > b)
    // {
    //     printf("YOUR FIRST NUMBER IS GREATER THAN SECOND NUMBER");
    // }
    // else if (b > a)
    // {

    //     printf("YOUR SECOND NUMBER IS GREATER THAN FIRST NUMBER");
    // }

    // else
    // {
    //     printf("BOTH NUMBER ARE EQUAL");
    // }
    // return 0;

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

    float x = (a + b + c + d + e) / 5.0 ;

   printf(" Average marks is %f ", x );

    if (a > b && a > c && a > d && a > e)
    {
        printf("Your greatest marks is %d in 'MATH' ", a  );
    }
    else if (b > a && b > c && b > d && b > e)
    {
       printf("Your greatest marks is %d in 'ENGLISH'", b);
    }
    else if (c > a && c > b && c > d && c > e)
    {
        printf("Your greatest marks is %d in 'PHYSICS'" , c );
    }
    else if (d > a && d > c && d > b && d > e)
    {
        printf("Your greatest marks is %d in 'CHEMISTRY'", d);
    }
    else if (e > a && e > c && e > b && e > d)
    {
        printf("Your greatest marks is %d in 'BIOLOGY'", e);
    }
    else
    {
        printf("enter valid number ");
    }

    return 0;
}