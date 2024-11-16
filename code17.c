#include<stdio.h>
#include<math.h>
void square(int num);
int main(){
    int num;
    printf("enter the number to square :");
    scanf("%d",&num);
    square(num);
}
void square(int num){
    printf("%f",pow(num,2));
}