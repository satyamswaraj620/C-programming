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


#include<stdio.h>

void hello();
void french();

int main(){  

    printf("enter where are you from.If you are from ind enter 'i' and if you are from french enter 'f'");
char name;
scanf("%c",&name);
if(name == 'i'){
    hello();

}else{
    french();
}

    return 0;

}

void hello(){
   printf("Namaste");
}
void french(){
    printf("Bonjour");
}