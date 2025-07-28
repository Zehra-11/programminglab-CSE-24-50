/*write a program  to print the following pattern(first n lines)
  
*
* * *    
* * * * *

*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
Each line has:

Line 1 → 1 star

Line 2 → 3 stars

Line 3 → 5 stars

Line i → 2 * i - 1 stars
*/

