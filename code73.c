//call by reference 
#include <stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x =*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("enter 2 numbers :");
    scanf("%d%d",&a,&b);
    printf("before swapping the numbers are : %d , %d\n",a,b);
    swap(&a,&b);
    printf("after swapping the numbers are : %d , %d",a,b);


}