#include<stdio.h>
#include<string.h>
struct person{
    char person_name[50];
    int phone_number;
    char address[80];
};
int main(){
struct person p1;
strcpy(p1.person_name,"SHIVANE");
printf("the person name is :%s",p1.person_name);
}


