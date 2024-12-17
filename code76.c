#include<stdio.h>
#include<string.h>
int main(){
    char str1[60];
    char str2[60];
    printf("enter string 1 :");
    scanf("%[^\n]s",str1);
    getchar();
    printf("enter string 2 :");
    fgets(str2,60,stdin);
    

    printf("length of string 1 is %d\n",strlen(str1));
    printf("length of string 2 is %d\n",strlen(str2));
    printf("concatinating 2 strings : %s",strcat(str1,str2));

}