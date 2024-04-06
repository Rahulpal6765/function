#include<stdio.h>

void printTable(int n);
int sum(int a, int b);

int main(){
    int n, a, b;
     printf("Enter first number : ");
    scanf("%d", &a);
     printf("Enter second number : ");
    scanf("%d", &b);
    sum(a,b);
    printf("Enter number : ");
    scanf("%d", &n);
    printTable(n);
    return 0;
}
 void printTable(int n){
    for(int i = 1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, i*n);
    }
 }
 int sum(int a, int b){
    int s = a+b;
    printf("Sum is %d\n", s);
 }
