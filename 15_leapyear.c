#include <stdio.h>

int main()
{
    int year;
    printf("eneter year : ");
    scanf("%d", &year);
if((year%4==0&& year%100!=0)||year%400 == 0){
    printf("is a leap year");
}
else{printf("not a leap year");}
    return 0;
}
//leap yr