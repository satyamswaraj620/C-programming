#include <stdio.h>
int main()
{
    // int rollno;
    /*
       printf("ENTER YOUR ROLL NO - ");
       scanf("%d", &rollno);

       if (rollno >= 34)
       {
           printf("your in group 'Y' ");
       }
       else
       {
           printf("your in group 'X'");
       }
       return 0; */

    printf("PLEASE ENTER YOUR ROLL NO  :- ");
    scanf("%d", & rollno);

    switch (rollno)
    {

    case 35:
        printf("WELCOME 'SATYAM SWARAJ' \n");
        printf("HOW ARE YOUR? . How can i help ?");
        break;

    case 36:
        printf("WELCOME 'HIMANSHU PANDAY'\n");
        printf("HOW ARE YOUR? . How can i help ? ");
        break;

    case 53:
        printf("WELCOME 'SARA AFREEN'\n");
        printf("HOW ARE YOUR? . How can i help? ");

        break;

    case 56:
        printf("WELCOME 'OMM PRAKASH MUDUIL'\n");
        printf("HOW ARE YOUR? . How can i help? ");

        break;

    case 60:
        printf("WELCOME ''\n");
        printf("HOW ARE YOUR? . How can i help? ");
        break;

    default:
        printf("user not found");
    }
    return 0;

    // CHAPTER THREE QUESTION PRACTISE
    // first question

    //  int marks ;
    //  printf("ENTER YOUR MARKS:- ");
    //  scanf("%d", &marks);

    // if(marks>30 && marks <= 100){
    //     printf("'CONGRATULATIONS' YOUR ARE PASS");

    // }
    // else {
    //     printf("better luck next time ");
    // }
    // return 0 ;

    // SECOND QUESTION

    int mark;
    printf("ENTER YOUR MARK ");
    scanf("%d", &mark);

    if (mark < 30)
    {
        printf("YOU GET 'C' grade ");
    }
    else if (mark >= 30 && mark < 70)
    {
        printf("YOU GET 'B' grade ");
    }
    else if (mark >= 70 && mark < 90)
    {
        printf("YOU GET 'A' grade ");
    }
    else if (mark >= 90 && mark <= 100)
    {
        printf("YOU GET 'A+' grade ");
    }
    else
    {
        printf("wrong number");
    }
    return 0;
}