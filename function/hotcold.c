#include<stdio.h>
void hotcold(float n);
int main(){
    float n;
    printf("Enter the temp in celsius : ");
    scanf("%f", &n);
    hotcold(n);
return 0;
}
void hotcold(float n){
    if(n < 15){
        printf("cold\n");
        
    } else{
        printf("hot\n");
    }
}