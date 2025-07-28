//sum of first n natural number , also print them in reverse

#include<stdio.h>
int main(){
   int n;
   int sum =0;
   
   printf("enter number : ");
   scanf("%d",&n);
   
   for(int i =1; i<=n ; i++){
     sum = sum + i;
    
   }
 printf("the sum is %d\n",sum);

for(int i= n; i >=1; i--){
    printf("%d\n",i);
}
 
    return 0;
}
