#include<stdio.h>
int main(){
    int arr[3]={10,20,30};

    int * ptr;
    ptr=arr;
    for(int i=0;i<3;i++){
        printf("the value of %d pointer is : %d \n",i,*ptr);
        printf("the address of %d pointer is : %d  \n",i,ptr);
        ptr++;
    }



}