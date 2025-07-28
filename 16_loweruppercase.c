
#include <stdio.h>

int main(){
    char alph = 'f';
    
    
    printf("The character is %c\n ",alph);
    printf("its asci value is %d\n",alph);

if (alph >= 97 && alph <=122){
    printf("its a lower case");
}
else if(alph >=65 && alph <= 90){
printf("its upper case");
}
else {printf ("its not alphabet");
}
    return 0;
}