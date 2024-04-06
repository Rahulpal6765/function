#include<stdio.h>
float convertTemp(float c);
int main(){
    float c;
    printf("enter the temp in celcius : ");
    scanf("%f", &c);
    printf("the temp in farenhiet is %f\n", convertTemp(c));
    return 0;
}
float convertTemp(float c){
    return c * 1.8 + 32;
}