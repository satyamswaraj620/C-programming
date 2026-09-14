// #include <stdio.h>
// void satyam(); // decalaration

// void thankyou(); // decalaration

// int main()
// {                         //  function call
//     satyam();
//     thankyou();

//     return 0;
// }

// void satyam()
// {
//     printf("hello satyam swaraj\n"); // funtion defination
// }
// void thankyou()
// {                                   // funtion defination
//     printf("thank you\n ");
// }


// #include<stdio.h>

// void hello();
// void french();

// int main(){  

//     printf("enter where are you from.If you are from ind enter 'i' and if you are from french enter 'f'");
// char name;
// scanf("%c",&name);
// if(name == 'i'){
//     hello();

// }else{
//     french();
// }

//     return 0;

// }

// void hello(){
//    printf("Namaste");
// }
// void french(){
//     printf("Bonjour");
// }

// #include <stdio.h>

// int sum(inta,intb);

// int main(){
//     int a,b ;
//     printf("enter a number");
//     scanf("%d,%d",&a,&b);
//     int sum(inta, intb);
//     sum 
//     printf("SUM is %d ", )
// }
// int sum(inta,intb){
//     int sum = a+b ;

// }

// #include <stdio.h>

// void printTable(int t);

// int main(){
//     int t ;

//     printf("enter a number");
//     scanf("%d" ,&t);
//      printTable( t);
//     return 0;

// }

// void printTable(int t){
//     for(int i = 1 ;i<=10;i++){
//         int table = i*t;
//         printf(" %d \n", table);
//     }
//    printf("table %d", table);
// }

// #include <stdio.h>
// #include<math.h>

// void math(int a);


// int main(){
// int a ;

// printf("enter number");
// scanf("%d",&a);
//  math(a);

// return 0 ;
// }

// void math(int a){
//     int  power = pow(a,2);
//     printf("square of number is '%d' ",power);

// }

//  #include<stdio.h>
// #include<math.h>

// void square(float a);
// void circle(float a);
// void rectangle(float a);

// int main(){
// int a ;
// printf("enter a number : -");
// scanf("%d",&a);
 

// square(a);
// circle(a);
// rectangle(a);

// return 0;

// }
// void square(float c){
//     printf(" Area of square is - %f\n", pow(c,2));

// }
// void circle(float b){
//     printf("Area of circle is - %f\n", 3.14*pow(b,2) );
// }
// void rectangle(float d){
//     printf("Area of rectangle is - %f\n", pow(d,2));
// }     



// #include <stdio.h>          

// int sum(int n );

// int main(){                          //RECUSION DO IT AGAIN 
                                        //RECUSION DO IT AGAIN
                                        //RECUSION DO IT AGAIN
                                        //RECUSION DO IT AGAIN


// }

// int sum(int n ){
//     int sum = sum(n-1) + n ;
//     sum
// }

/*#include <stdio.h>

int factorial(int a);

int main(){
    int a ;
    printf("enter a number - ");
    scanf("%d",&a);
factorial(a);
return 0 ;
}

int factorial(int a){
 int c = 1 ;
    for(int i = 1;i<=a;i++){
       

     c=  c*i; 
   printf(" %d\n", c);

    }
    printf("factorial is - %d", c);
    
    return c;
}    */

#include <stdio.h>

int fact(int a);

int main(){
    int a ;
    printf("enter a number - ");
    scanf("%d",&a);
printf("factorial is - %d",fact(a));
return 0 ;
}

int fact(int a){
    
    if(a==1){ 

        return 1 ; }

 int factnm = fact(a-1);
 int factn = factnm*a ;
    
 return factn ;
    
}



