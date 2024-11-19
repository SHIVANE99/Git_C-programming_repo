//finding prime number
#include<stdio.h>
int main(){
    int num;
    printf("enter number to check :");
    scanf("%d",&num);
    int flag=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            flag++;
        }

    }
    if(flag==2){
        printf("its prime number");
    }
    else{
        printf("not a prime number");
    }

}