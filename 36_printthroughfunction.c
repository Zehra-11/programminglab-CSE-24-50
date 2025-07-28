
// table of given number n
#include <stdio.h>

void printTable(int n);

int main()
{
    int n;

    printf("enter number : ");
    scanf("%d", &n);
    printTable(n); // argument / actual parameter

    return 0;
}

void printTable(int n)
{ // parameter / formalparametr

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}