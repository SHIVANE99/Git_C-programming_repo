#include<stdio.h>
//printing table of a number given by the user
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        printf("%d\n",i*n);
    }

}