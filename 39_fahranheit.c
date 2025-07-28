//write functions to covert celsius to fahrenheit


#include <stdio.h>

float converttemp(float celsius);
int main(){
    
    float fahr =converttemp(37);
   
    printf("The temp inn fahren is : %f", fahr); // or directly write converttemp(37) without initialising directly after %f
    return 0;
}
float converttemp(float celsius){

    float fahr = celsius *(9.0/5.0) + 32;
  return fahr;
}