// print the table of a number input by user 
#include <stdio.h>

int main(){
    int n;
    printf("enter number to get its table : ");
    scanf("%d",&n);
    
for(int i= 1; i<=10; i++){
printf("%d * %d = %d\n",n,i,n*i);
    
}

    return 0;
}