//print Helloworld 5 times

#include <stdio.h>

void printhelloworld(int n);

int main(){
   
     printhelloworld(5);
    
    return 0;
}

//recursive function

void printhelloworld(int n){
    
    if (n == 0){ // base case :to stop function, base case must be written first in block code
        return ;
    } 

    printf("HelloWorld\n");
    
    printhelloworld(n-1);// to call after decreasing value
}