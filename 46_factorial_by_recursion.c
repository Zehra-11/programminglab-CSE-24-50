#include <stdio.h>

int fact(int n);

int fact(int n){
if (n==1){
    return 1;
      
}

return fact(n-1) * n;
}
int main(){
    int n =5;
    printf("the factorial of %d is %d",n,fact(n));
    return 0;
}