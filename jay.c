// #include <stdio.h>
// int main()
// {
//     int n=145;
    
//     while(n!=0)
//     {
//         int d=n%10;
//         printf("%d",d);
//         n=n/10;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n , c;
//     printf("enter a number : - ");
//     scanf("%d",n);
    
   

//     for(int i = 1 ; i <= n ; i++){
//          int p = 0 ;
//          int q = 1 ;
// c = p + q ;

//          printf("%d", c); 


//     }
// return 0 ;
//}

#include<stdio.h>
int main(){
    int n ; 
    printf("Enter a number ");
    scanf("%d", &n );
int count = 0 ; 
for(int i = 1 ; i<=n ; i++){
     
     if(n%i == 0 ) {
        count++;
     } 


}
if(count > 2 ){
    printf("Enter number is not a prime number ");
}
else{
    printf("Enter number is a prime number ");
}

return 0 ; 

}
