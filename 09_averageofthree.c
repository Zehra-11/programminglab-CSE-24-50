// avg of 3 numbers 
#include <stdio.h>
int main (){
 float x ;
 float y;
 float z;
float average;

printf("enter  number 1: ");
scanf("%f",& x);

printf("enter number 2: ");
scanf("%f",& y);

printf("enter number 3: ");
scanf("%f",& z);

average = (x +y + z )/ 3;
printf("the avg is %.1f ",average);

return 0;
}