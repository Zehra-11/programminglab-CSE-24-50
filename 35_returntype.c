// sum of two numbers
// using return type function

#include <stdio.h>

int sum(int a, int b);

int main()
{
  int a, b;
  printf("enter number: ");
  scanf("%d", &a);

  printf("enter number: ");
  scanf("%d", &b);

  sum(a, b);

  printf("the sum is : %d", sum(a, b));

  return 0;
}

int sum(int x, int y)
{
  return x + y; // we can do return 12 but not 3.1 4
}