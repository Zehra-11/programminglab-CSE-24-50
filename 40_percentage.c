//write function to calcu percentge of a student from marks in science ,math,sanskrit

#include <stdio.h>
float calcupercentage(float m1,float m2,float m3);

int main(){
    float sc =22;
    float math = 56;
    float sans =68;
   
    printf("the percentage is %f ",calcupercentage(sc,math,sans));
    return 0;
}
float calcupercentage(float m1,float m2,float m3){

    float percentage =    (m1+m2+m3)/3 ;
return percentage;
} 