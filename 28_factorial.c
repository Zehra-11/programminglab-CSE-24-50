// factorial of given number
#include <stdio.h>

int main(){
    
int n =5;
int fact = 1;

for(int i = 1; i <=n; i++){

    fact = fact*i;
}
printf("factorial of the number is %d",fact);
    return 0;
}