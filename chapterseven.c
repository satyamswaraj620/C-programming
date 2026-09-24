// #include <stdio.h>

// int main (){

/* int age[2];
 printf("Satyam enter your age :");
 scanf("%d",&age[0]);

 printf("himanshu enter your age : ");
 scanf("%d",&age[1]);

 printf("satyam age = %d  , himanshu age = %d ", age[0],age[1]);
 return 0 ;*/

//     void gst(float a , float b , float c );

//     int main(){

//  float price[3];
//  printf("enter book price :");
//     scanf("%f",&price[0]);

//     printf("enter chocolate price : ");
//     scanf("%f",&price[1]);

//     printf("enter clothes price : ");
//     scanf("%f",&price[2]);

//     gst(price[0],price[1],price[2]);
// return 0;
// }
//     void gst(float a, float b, float c ){

//         float gst1 = a + (0.18*a);
//           float gst2 = b + (0.18*b);
//             float gst3 = c + (0.18*c);

//             printf("price of book with gst is = %f \n", gst1);
//               printf("price of chocolate with gst is = %f \n", gst2);
//                 printf("price of clothes with gst is = %f \n", gst3);

//     }

// #include <stdio.h>

// int main()
// {
//   int adhaar[5];
//      int *ptr = &adhaar[0] ;
//      for(int i = 0;i<5;i++){
//       printf("index %d ",i);
//       scanf("%d",ptr+i);        //ptr+i = adhaar[i]
//      }

//      for(int i = 0 ; i<5;i++){
//      printf("adhaar no - %d\n",*(ptr+i));  //*(ptr+1) = adhaar[i]

//      }
//      return 0 ;
// }

/*#include<stdio.h>

int main(){
int marks[3] ;
int  *ptr = &marks[0] ;



printf("Satyam swaraj enter your marks ");
for(int i = 0 ; i<3 ; i++ ){
scanf("%d",ptr+i);
}
printf("marks - %d,%d,%d ", marks[0],marks[1],marks[2]);
} */
/*#include <stdio.h>
int main()
{
        int marks[2][3];

        marks[0][0] = 50;
        marks[0][1] = 60;
        marks[0][2] = 90;


        marks[1][0] = 88;
        marks[1][1] = 72;
        marks[1][2] = 76;


        printf( "%d",marks[1][1]);
}       */
/*#include<stdio.h>

int countOdd(int arry[] , int n );

int main(){
        int arry[6] = { 1,2,3,4,5,6};
       countOdd(arry,6);

}
int countOdd(int arry[] , int n ){
int count = 0 ;
for(int i = 0 ; i <=n ; i++ ){

        if(arry[i] % 2 != 0 ){
                count++ ;

        }
        
}
       printf("No of Odd number is - %d", count) ;                
       return count ;
} */

// #include <stdio.h>

// int main()
// {
//     int n, a = 0, b = 1, c, i;                              // chatgpt 
                                                                   // chatgpt 

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     for(i = 1; i <= n; i++)
//     {
//         printf("%d ", a);

//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }

/*#include<stdio.h>

void reverse(int arry[],int n);

void print(int arry[],int n);


int main(){
        int arry[] =  {1,2,3,4,5} ;

        reverse(arry , 5 );
     print(arry,5 );
       
        return 0 ; 
}
void reverse(int arry[] , int n){
        for(int i = 0 ; i <n/2; i++){
                
              int   firstvalue = arry[i];
               int  secondvalue = arry[n-1-i];
                arry[i] = secondvalue ;
                arry[n-1-i] = firstvalue ;
        }
  // printf("first value is = % d , second value is = %d ", arry[0], arry [1]);
       

}
     void print(int arry[],int n){
        for(int i = 0 ; i < n ; i++){
                printf("%d\t ", arry[i]);
        }
     }
*/                                        #include <stdio.h>
int 
                    