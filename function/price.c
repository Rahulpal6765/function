#include<stdio.h>
void calculateprice(float n);
int main(){
    float n;
    printf("Enter actual price ");
    scanf("%f", &n);
    calculateprice(n);
    return 0;
}
void calculateprice(float n){
    printf("final price is %f\n", n + (0.18*n));
}