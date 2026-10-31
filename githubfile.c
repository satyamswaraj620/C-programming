#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number - ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        char a = 'A';
   for(int j = 1; j<=n;j++){
    
    printf("%c", a);
    a = a + 1 ;
   }
   printf("\n");
    }
    return 0 ;
} 


