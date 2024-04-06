#include<stdio.h>
float percentage(int s, int m, int sa);
int main(){
    int s, m, sa;
    printf("enter the marks in science : ");
    scanf("%d", &s);
    printf("enter the marks in maths : ");
    scanf("%d", &m);
    printf("enter the marks in sanskrit : ");
    scanf("%d", &sa);
    printf("The percentage is %f", percentage(s,m,sa));
    return 0;
}
float percentage(int s, int m, int sa){
    return ((s+m+sa)/300 )* 100;
}