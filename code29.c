#include<stdio.h>

int main(){
    struct student{
    char name[50];
    int rollno[50];
};
    printf("%d",sizeof(struct student));
}