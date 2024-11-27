//C Program to Calculate the Power of a Number
#include<stdio.h>
#include<math.h>
int main(){
    float bnum,exp;
    printf("enter base number :");
    scanf("%f",&bnum);
    printf("enter exponent number");
    scanf("%f",&exp);
    printf("%f ** %f = %f",bnum,exp,pow(bnum,exp));
    
}