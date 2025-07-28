

#include <stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a,float b);

int main(){
     float side =3;
     
printf("the area of square is %f", squarearea(side) );
    

    return 0;
}

float squarearea(float side){
    return side*side;
}
float circlearea(float rad){
    return 3.14*rad*rad;
}
float rectanglearea(float a,float b){
    return a*b;
}