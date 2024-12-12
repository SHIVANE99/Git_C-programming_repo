//gcd of 3 numbers 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    int result = a<b && a<c ? a: b<a && b<c ? b:c;
    while(result >0){
        if(a%result==0 && b%result==0 && c%result==0){
            break;
        }
        result--;
    }
    printf("gcd of %d , %d & %d is : %d ",a,b,c,result);
}