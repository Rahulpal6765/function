#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char n ;
    printf("if you are indian enter I or if you are french enter F ");
    scanf("%c", &n);
    if(n == 'I'){
        namaste();// function call
    } else if(n == 'F'){
        bonjour();
    } else printf("Invalid");
    return 0;
}
void namaste (){
    printf("Namaste\n");
    //bonjour(); //function call
}
void bonjour(){
    printf("Bonjour\n");
}