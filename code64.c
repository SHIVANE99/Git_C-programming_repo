#include <stdio.h>
//pallindrome number
// 121 ------------ 121
int main (){
    int n,c,rem;
    int sum=0;
    printf("enter number :");
    scanf("%d",&n);
    c=n;

    while(n!=0){
        rem=n%10;
        sum=rem+(sum*10);
        n=n/10;
    }
    if(sum==c){
        printf("the number is pallindrome number");
    }
    else{
        printf("not a pallindrome number");
    }



    return 0;
}

