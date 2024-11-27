#include<stdio.h>
// c program to obtain factorial of a number
int main(){
    int n, c=1;
    printf("enter number of which you want the factorial");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        c=c*i;
        
       
    }
    printf("factorial of the number %d is : %d",n,c);




    return 0;
}