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


 #include <stdio.h>
 
int lenght(char name[]);

int main(){
    char name[100];
    printf("enter your name ");
    fgets(name,100 , stdin);
    lenght(name);
    return 0 ;

}

int lenght(char name[]){
    int count = 0 ;

    for(int i = 0 ; name[i] != '\0' ; i++){
    
count = count +1;
    }
    printf("countis  %d ", count-1);
}

