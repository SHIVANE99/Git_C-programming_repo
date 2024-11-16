#include<stdio.h>
#include<string.h>
struct student{
    char name[1000];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll=101;
    s1.cgpa=8;
    strcpy(s1.name,"shivane");
    printf("roll number is :%d\n",s1.roll);
    printf("cgpa is :%f\n",s1.cgpa);
    printf("name is :%s\n",s1.name);


}