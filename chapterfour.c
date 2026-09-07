// #include<stdio.h>
// int main(){
// for(int i = 0; i<=10; i = i+1){
//     printf("%d\n" ,i);
// }
// return 0 ;
// }

// #include<stdio.h>
// int main(){
// int b ;
// scanf("%d",&b); 
    
//     for(int i =0;i<=b;i = i+1){
        
//         printf("%d\n",i);
//      }
// int b;
//     int i = 0 ;
//     scanf("%d",&b);
//     while(i<=b){
//         printf("%d\n",i);
//         i = i +1;
//     }

//}

#include<stdio.h>
int main(){
    // int s;
    // int i =0 ;
    // printf("give a number ");
    // scanf("%d",&s);
    // while(i<=s){
    //     printf("%d\n",i);
    //     i++;
    // }

    // int p ;
    // printf("give a number ");
    //  scanf("%d",&p);
    
    // for(int i = 1; i<=p;i++ ){
    //     printf("%d\n",i);
    //}

    // int w ;
    // int i = 0;
    // printf("enter number : ");
    // scanf("%d", &w);
    // do{
    //     printf("%d\n",i);
    //     i++;
    // }while(i<=w);

int v ;
int sum = 0 ;
printf("enter number");
scanf("%d",&v);

for(int i = v ; i>=1; i--){
     
sum = sum + i ;
printf("%d\n",sum );

  
}

printf("%d\n",sum);





    return 0 ;
}

