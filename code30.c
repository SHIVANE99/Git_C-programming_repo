#include<stdio.h>
int main(){
    union people{
        int num[50];
        char name[50];
    };
    printf("%d",sizeof(union people));
}