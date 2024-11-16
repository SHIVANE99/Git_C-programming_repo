#include <stdio.h>
int main(){
    int n;
    int c=0;
    printf("enter number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        c=c+i;
    }
    printf("the sum is :%d",c);

}