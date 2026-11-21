//ARRAY 
#include<stdio.h>
int main(){
 // int arr[5] ; // its create 5 integer datatypes whose name start with arr[0],arr[1]...arr[4]
// int arr[5] = {53,35 ,36, 60 , 56 }; // this how arry get initilize 

//printf("%d",arr[0]);    In arry index start with 0 not 1    

// int arr[5] , i ;
// printf("Enter you roll and friend roll no - ");
// for(i = 0 ; i<5 ; i++ ){
//     scanf("%d",&arr[i]);
// }
// for(i = 0 ; i<5 ; i++ ){
//     printf("%d\t",arr[i]);
// }

char name[6]= {'S','A','T','Y','A','M'};
for(int i = 0 ; i<6 ; i++ ){
    printf("%c\t",name[i]);}


return 0 ; 
}