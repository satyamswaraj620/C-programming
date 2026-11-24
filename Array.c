//ARRAY 
#include<stdio.h>
int main(){
 // int arr[5] ; // its create 5 integer datatypes whose name start with arr[0],arr[1]...arr[4]
//  int size = 10 , a[size]; we can also declare arry like this 
//int arr[5] = {53,35 ,36, 60 , 56 }; // this how arry get initilize 
    //  arr[0] = 33 ;
    //    arr[1] = 60 ;             // we can also initilize like this
    //      arr[2] = 36 ;
    //        arr[3] = 35 ;
    //          arr[4] = 53 ;
//     arr[4] = 100;  // change the value of arr[4] value 56 to 53 // UPDATING VALUE OF DATATYPE 

//float a[4] = {5.3 , 3.5 , 5.6, 3.6 };
//printf("%d",arr[0]);    In arry index start with  0 not 1    

// int arr[5] , i ;
// printf("Enter you roll and friend roll no - ");
// for(i = 0 ; i<5 ; i++ ){
//     scanf("%d",&arr[i]); // input from user 
// }
// for(i = 0 ; i<5 ; i++ ){
//     printf("%d\t",arr[i]); 
// }

// char name[6]= {'S','A','T','Y','A','M'};
// for(int i = 0 ; i<6 ; i++ ){
//     printf("%c\t",name[i]);}

//printf("%.2f",a[0]);
// int d;
// printf("fatrgd");   // user batayega ki kitna datatype banega

// scanf("%d",&d);     // user batayega ki kitna datatype banega


// int arr[d], i ;     // user batayega ki kitna datatype banega 

// for(i = 0 ; i<5 ; i++ ){
//     printf("Enter your %d number - " , i+1);
//     scanf("%d",&arr[i]); // input from user 
// }
// for(i = 4 ; i>=0 ; i-- ){
//     printf("%d\t",arr[i]);        // number print in reverse 
// }


// int arry[3];
// for(int i = 0 ; i<3 ; i++) {
//     printf("enter your marks"); 
//     scanf("%d",&arry[i]);
// }
// for(int i = 0 ; i<3 ; i++){
//     if(arry[i]<35){
//         printf("%d\n",i);
//     }
//     else {printf("%d\n", arry[i]);
// }
// }
int n,m; 
printf("ENTER NO OF COLUMN : - ");
scanf("%d", &n);
printf("ENTER NO OF row : - ");
scanf("%d",&m);
for(int i =1 ; i<=m ; i++){
      
    for(int j = 1 ; j <=n; j++){
        if(n||m || i == j) printf("*");
        else printf( " ");
    }
    printf("\n");
}



return 0 ; 
}

