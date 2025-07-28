//write a function to calculate sum,prdct,average of two numbers. print that average in the main func

#include <stdio.h>

void doWork(int a,int b,int *sum,int *prod,int *avg);


 int main(){
    int a =3; int b =5;
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);
    
    printf("sum =%d,prod =%d,avg= %d",sum,prod,avg);
    return 0;
}
void doWork(int a,int b,int *sum,int *prod,int *avg){

     *sum =a+b;
     *prod =a*b;
     *avg= (a+b)/2; 

}