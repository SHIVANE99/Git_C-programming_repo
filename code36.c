//C Program to Check Whether a Number is Even or Odd
#include<stdio.h>
int main(){
    int c;
    printf("enter a number---- :");
    scanf("%d",&c);
    if(c % 2 == 0){
        printf("the number %d is even",c);
    }
    else{
        printf("the number is odd");
    }
}