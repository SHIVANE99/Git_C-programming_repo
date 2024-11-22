#include <stdio.h>

int main(){
    int max=3;
    int var[]={10,20,30};
    int *ptr;
    ptr=var;
    for(int i=0;i<max;i++){
     printf("the value of pointer[%d] is : %d\n",i,ptr[i]);
     
    }
   
   
}