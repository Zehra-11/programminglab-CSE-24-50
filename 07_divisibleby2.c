// check if a number is divisible by 2 
#include <stdio.h>
int main (){
    int x;
    
    printf(" enter number : ");
    scanf("%d",&x);
    printf("%d", x% 2 == 0); // precendence of modulo over ==
    
    
    return 0;
}

//// write a program to check if a number is odd or even 
// same as above 
// even --> 1
// odd  ---> 0