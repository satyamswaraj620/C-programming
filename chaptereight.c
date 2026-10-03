// #include <stdio.h>
// int main (){
// char firstname[30]  ;


//     printf("Enter your first name ");
//     scanf("%s",firstname);

//     printf("I %s  , How are you !", firstname );
// }   


// #include <stdio.h>
// int main (){
// char firstname[30] , secondname[30];


//     printf("Enter your first name ");
//     scanf("%s",firstname);

//     printf("Enter your first name ");
//     scanf("%s",secondname);

//     printf("I %s %s , How are you !", firstname ,secondname);
// }

// #include <stdio.h>
// int main (){
// char firstname[30] = "satyam swaraj "  ;

// //puts(firstname);

//     printf("I %s  , How are you !", firstname );
// }   

// #include <stdio.h>
// int main (){
// char firstname[100]  ;


//     printf("Enter your first name ");
// //gets(firstname);
// fgets(firstname,100,stdin);
// puts(firstname);

//     //printf("I %s  , How are you !", firstname );
// }   


//  #include <stdio.h>
//  #include<string.h>
 
//int lenght(char name[]);

// int main(){
//     char name[100];
//     printf("enter your name ");
//     fgets(name,100 , stdin);
//    // lenght(name);
// int length = strlen(name);
// printf("length of name is : - %d", length);

//     return 0 ;

// }

// int lenght(char name[]){
//     int count = 0 ;

//     for(int i = 0 ; name[i] != '\0' ; i++){
    
// count = count +1;
//     }
//     printf("countis  %d ", count-1);
    
// }
//  #include<stdio.h>
//  #include<string.h>

//  int main(){
//     char oldname[] = "hello";
//     char newname[] = "world";
// puts(oldname);
// puts(newname);

// printf("%d",strcmp(oldname,newname));

//     strcpy(oldname, newname);
//     puts(oldname);

// strcat(oldname, newname);
// puts(oldname);
//     return 0 ; 
//  }
 #include<stdio.h>
 //#include<string.h>

 int main(){

    char input[100];
    char ch ;
    for(int i = 0 ; ch != '\n'; i++){
        scanf("%c",&ch);
        input[i] = ch ;

    }
input[i] = '\0';
puts(input);
return 0 ;
 }
 
    }
input[i] = '\0';
puts(input);
return 0 ;
 }