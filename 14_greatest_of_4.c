#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("enter number 1 : ");
    scanf("%d", &a);

    printf("enter number 2 : ");
    scanf("%d", &b);

    printf("enter number 3 : ");
    scanf("%d", &c);

    printf("enter number 4 : ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
      printf("%d is greatest",a);
    }
    if (b > a && b > c && b > d)
    {
      printf("%d is greatest",b);
    }
    if (c > b && c > a && c > d)
    {
      printf("%d is greatest",c);
    }
    if (d > b && d > c && d > a)
    {
      printf("%d is greatest",d);
    }
    
    return 0;
}
