#include<stdio.h>
int main(){
    #define varname(v) #v
    char sem;
    printf("my variable name is : %s",varname(sem));
}