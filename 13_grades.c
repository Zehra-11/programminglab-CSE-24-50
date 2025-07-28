// Write a program to find grade of a student given his marks based on below:
// 90 – 100 => A
// 80 – 90 => B
// 70 – 80 => C
// 60 – 70 => D
// 50 – 60 => E
// <50 => F

#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("grade A");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("grade B");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("grade C");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("grade D");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("grade E");
    
    }
else if (marks < 50 && marks >= 0)
    {
        printf("Failed");
    }
else {
printf("invalid entry");
}

return 0;
}