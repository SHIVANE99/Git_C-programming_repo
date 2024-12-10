#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct person{
    char name[50];
    int phno;
}per;
int main(){
    int count =0;
    per p1;
    printf("enter the name :");
    gets(p1.name);
    printf("enter phone number :");
    scanf("%d",&p1.phno);
    printf("%d",p1.phno);
    for(int i='a';i<='z';i++){
        count=0;
        for(int j=0;p1.name[j]!='\0';j++){
            if(i==p1.name[j]){
                count++;
            }
        }
        if(count>0){
            printf("%c is repeated %d times\n",i,count);
        }
    }
}
