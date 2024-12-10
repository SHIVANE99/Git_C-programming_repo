#include<stdio.h>
#include<string.h>

typedef struct data{
    char name[40];
    int rollno;

}d1;
int main(){
    char name[20];
    d1 daata;
    printf("enter name :");
    scanf("%[^\n]s",name);
    strcpy(daata.name,name);
    printf("name entered is : %s",daata.name);




    return 0;
}