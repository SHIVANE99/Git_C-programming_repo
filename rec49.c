#include<stdio.h>
//sum of first n natural numbers using recursion
int sum(int n){
    if(n==0){
        return 0;
    }
    int val = n + sum(n-1);
    return val;
}
int main(){
    int n,value;
    printf("enter the integer upto which you want to find the sum : ");
    scanf("%d",&n);
    value= sum(n);
    printf("the sum upto %d is : %d  ",n,value);

}