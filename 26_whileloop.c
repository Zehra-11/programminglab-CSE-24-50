// sum of first ten  natural number using while loop
#include <stdio.h>

int main(){
    int n =10;
    int i =1;
    int sum = 0;

while(i<=10){
    sum = sum + i;
   
    i++;
}
 printf("the sum is : %d\n", sum);
    return 0;
}