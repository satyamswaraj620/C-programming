#include <stdio.h>

// int main()
// {
//     
//     int a = 19 ;
    //     int *ptr = &a ;   //  * = value of address

    //     int aa = *ptr  ;// & = address of

    //     printf("%d\n",aa);

    //     printf("%p\n",&aa);
    //       printf("%p\n",&ptr);
    //         printf("%p\n",&a);
    //           printf("%p\n",ptr);
    //   printf("%p\n",&aa);

    // int a ;
    // int *ptr ;

    // ptr = &a ;

    // ptr = 0 ;

    // printf("a = %d\n", a);
    // printf("ptr = %d\n",*ptr);
    // printf("ptr =%d \n",&a);
    // printf("ptr =%d \n",ptr);

    //*ptr += 5 ;
    // ptr += 5;

    //  printf("a =%d \n",a);
    // printf("ptr =%d \n",*ptr);
    // //printf("ptr =%d \n",ptr);

    // (*ptr)++ ;
    // printf("ptr =%d \n",a);
    // printf("ptr =%d \n",*ptr);

    // float price = 39.00;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // printf("ptr - %d\n ", price);
    // printf("ptr - %d \n", *ptr);
    // printf("ptr - %d \n", *pptr);

    // printf("ptr - %u \n", &ptr);
    // printf("ptr - %u \n", &pptr);



    void swap(int a , int b);

    int main(){

        int a ,b ;
        printf("enter 1st number ");
        scanf("%d",&a);
        printf("enter second no ");
        scanf("%d",&b);

        swap(a,b);
    return 0;
}

void swap(int a , int b){
  int   x = b ;
   int  y = a ;
    printf( "a = %d  ,b = % d ", x,y );
}