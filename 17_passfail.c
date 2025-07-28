

int main(){
    int marks1;
    int marks2;
    int marks3;
    


    printf("enter marks1: ");
    scanf("%d",&marks1);

     printf("enter marks2: ");
    scanf("%d",&marks2);
     printf("enter  marks3 ");
    scanf("%d",&marks3);
    
    

if(marks1<33|| marks2<33|| marks3<33){
    printf("failed due to individual subj");
}
else if((marks1+marks2+marks3)/3< 40){
    printf("failed due to less percentage");}
else {printf("passed");
}


return 0;
}