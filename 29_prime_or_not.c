// Write a program to check whether a given number is prime or not using loops


#include <stdio.h>

int main() {
    int n = 3;        //
    int isPrime = 1;  // Assume number is prime
                      // itsprime is flag variable here we r asssumig n is prime but later in loop if we found that its not stisfying condition we take 'itsprime' as 0 i.e that its not prime
    
                      
if (n == 1 || n == 0)     
 {                                                
        isPrime = 0;  // 0 and 1 are not prime
    } 
else{

for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;  // Not prime
            break;
        }
    }
}
    if (isPrime == 1) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    return 0;
}