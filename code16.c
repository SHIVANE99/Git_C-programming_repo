//to find sum of 2 numbers using functions
#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    int s= sum(a,b);
    printf("%d",s);


}
int sum(int a,int b){
    return a+b;
}