#include<stdio.h>
//strings and pointers 
int main(){
    char str[100];
    int count=0;
    printf("enter string :");
    fgets(str,100,stdin);
    char *ptr=str;
    while(ptr!='\0'){
        printf("%c",*ptr);
        count++;
        ptr++;
    }
    printf("length of the string is :%d",count-1);
}