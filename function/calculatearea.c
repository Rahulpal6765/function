// #include<stdio.h>
// #include<math.h>
// void areaofsquare(int side);
// void areaofcircle(int radius);
// float areaofrectangle(float length, float c);
// int main(){
//     int side,radius;
//     float length, breadth;
//     printf("Enter side of square ");
//     scanf("%d", &side);
//     areaofsquare(side);
//     printf("Enter radius of circle ");
//     scanf("%d", &radius);
//     areaofcircle(radius);
//     printf("Enter length of rectangle ");
//     scanf("%f", &length);
//     printf("Enter breadth of rectangle ");
//     scanf("%f", &breadth);
//     areaofrectangle(length, breadth);
//     return 0;
// }
// void areaofsquare(int side){
//     printf("Area of square is %d\n", side*side);
// }
// void areaofcircle(int radius){
//     printf("Area of circle is %f\n", 3.14*radius*radius);
// }
// float areaofrectangle(float length, float breadth){
//     printf("Area of rectangle is %f\n", length*breadth);
// }

#include<stdio.h>
#include<math.h>
float areaofsquare(float side);
float areaofcircle(float radius);
float areaofrectangle(float length, float c);
int main(){
    float side,radius;
    float length, breadth;
    printf("Enter side of square ");
    scanf("%f", &side);
    printf("Area of square is %f\n", areaofsquare(side));
    printf("Enter radius of circle ");
    scanf("%f", &radius);
    printf("Area of circle is %f\n", areaofcircle(radius));
    printf("Enter length of rectangle ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle ");
    scanf("%f", &breadth);
    printf("Area of rectangle is %f\n", areaofrectangle(length, breadth));
    return 0;
}
float areaofsquare(float side){
    return side*side;
}
float areaofcircle(float radius){
   return 3.14*radius*radius;
}
float areaofrectangle(float length, float breadth){
    return length*breadth;
}