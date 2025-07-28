// keep taking input from user until user enters odd number

#include <stdio.h>
int main()
{

    int n;
   
    do{
        printf("enter number : ");
        scanf("%d", &n);

        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("thanks ");
    return 0;
}