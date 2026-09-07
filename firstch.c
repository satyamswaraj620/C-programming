#include <stdio.h>
int main()
{
    /*
        int class = 10;
        int _class = 12;

        printf("My name is SATYAM SWARAJ.\n");
        printf("I am from Patna,Bihar.\n");
        printf("I have completed %dth and %dth from CBSE board in 2023 and 2025.", class, _class);
        */
   /*    CHAPTER - 1 PREVIEW
   int a, b ;

    printf("ENTER YOUR 1st NUMBER - \n");
        scanf("%d", &a);
    printf("ENTER YOUR 2nd NUMBER - ");
        scanf("%d", &b);

    int C = a + b; 
    printf("Sum of the given two number is  -  % d", C );

*/

// CHAPTER QUESTION SOLVING  
//QUESTION 1 - ( AREA OF SQUARE)
// int a;
// printf("WHAT IS THE SIDE OF SQUARE - ");
// scanf("%d",&a );

// int area = a * a ;
// printf("The area of square is -- %d" , area);

// int side = 10 ;
// printf("AREA OF SQUARE IS - %d", side*side);

// QUESTION 2 (AREA OF CIRCLE  )
 
float radius ;
printf("enter radius of circle - ");
scanf("%f", &radius);

//float area = 3.14*radius*radius ;

float area = (22*radius*radius)/7;

printf("AREA OF CIRCLE IS - %f" , area);

    return 0;
}