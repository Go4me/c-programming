// write a program to calculate area of a circle
#include<stdio.h>
int main(){
    int r;
    printf("enter the radius: ");
    scanf("%d",&r);
    int area= 3.14*r*r;
    printf("the area is: %d", area);
    return 0;

}