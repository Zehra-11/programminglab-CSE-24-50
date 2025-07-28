#include <stdio.h>

int main()
{

    // loop counter as float
    for (float i = 1.0; i <= 5; i++)
    {
        printf("%f\n", i);
    }

    // loop counter as character
    for (char alph = 'A'; alph <= 'Z'; alph++)
    {
        printf("%c\n", alph);
    }
    return 0;
}