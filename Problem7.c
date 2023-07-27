// check even or odd
#include<stdio.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int b= a%2;
    if(b==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    
    return 0;

}