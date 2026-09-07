#include<stdio.h>
int main(){


// int a ;

//     printf("ENTER NUMBER :- ");
//     scanf("%d", &a);

   
//     if(a%4==0){
//         printf("lea");
//     }
//     else{
//         printf("ODD NUMBER");
//     }

// return 0 ;
// }
  int year;

printf("Enter a year: ");
 scanf("%d", &year);



if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { printf("%d is a leap year.\n", year);

} else {

printf("%d is not a leap year. \n", year);
}
return 0;
}