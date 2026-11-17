#include<stdio.h>
int main (){
    int orignal ,n, sum = 0 , m  ;
    
    printf("Enter a number : - ");
    scanf("%d",&n);
    
    orignal =  n ; 
    
    for(int i = 1 ; n!= 0 ; i++){

        if(n!=0){

            int x = n%10 ;
          //  printf("%d", x);
       // printf("%d", x);


             n = n/10 ;
           //  printf("%d\n",n);

sum = sum*10 + x ; 
        }
       // sum = sum*10 + x ; 
       
     
    }
    if(sum == orignal){printf("Enter number is palindrome no");}
    else {printf("Enter number is not  palindrome no");}
    

  // printf("%d",sum );
    return 0 ;
}