#include<stdio.h>               //ASCII VALUE     A = 65  a = 97  0 = 48  1 = 49    9 = 57     CHAR  =  1 BYTES =  8 BITS = 2^8 = 256 
                                 //  VS CODE FLOW HEXADECIMAL SYSTEM  TO COUNT ADDRESS OF ANY CHAR OR INT 
                                 // 0123456789abcdef
int main(){
    char name[6] = {'S','A','T', 'Y' , 'A', 'M' };
    int x = (int)name[1] ;
    // printf("%c\n",name[3]);
    // printf("%d\n",name[2]);

    // for(int i = 0 ; i <6 ; i++){
    //     printf("%c",name[i]);
    // }
    printf("%d",x);
    return 0 ;
}