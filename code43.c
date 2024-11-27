//C Program to Check Whether a Number is Prime or Not
#include<stdio.h>
int main(){
    int n,c=0 ;
    printf("enter the number to check : ");
    scanf("%d",&n);
    for(int i =1; i<=n;i++){
        if(n % i == 0){
            c++;
        }
    
    
    }
    if(n == 2 ){
        printf("number is a prime number");

    }
    else{
        printf("not a prime number");
    }







    
}