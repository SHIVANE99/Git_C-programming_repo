#include<stdio.h>
#include<string.h>
//pssing string to functions
int strr(char a[]){
    printf("the string in the function is :%s",a);
}
int main(){
    char str[69];
    printf("enter the string :");
    fgets(str,69,stdin);
    //calling strr()
    strr(str);
    return 0;

    
    
}