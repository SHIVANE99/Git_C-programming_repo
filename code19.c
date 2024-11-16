#include<stdio.h>
int main(){
    int rollno[5];
    //input data in array
    for(int i=0;i<5;i++){
        printf("%d rollnumber:",i);
        scanf("%d",&rollno[i]);

    }
    //output of data using array
    for(int i=0;i<5;i++){
        printf("%d rollnumber is :%d\n",i,rollno[i]);
    }


}