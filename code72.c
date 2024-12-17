#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    printf("enter string :");
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}