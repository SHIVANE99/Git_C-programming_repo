#include<stdio.h>
struct student{
    char name[50];
    int rollno[50];
};
int main(){
    printf("%d",sizeof(struct student));
}