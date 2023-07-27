// is a number given by user divisible by 2?
#include<stdio.h>
int main(){
    int a;
    printf("enter teh number:");
    scanf("%d",&a);
    int b= a%2;
    printf("the number is divisible by 2", b==0);
    return 0;

}