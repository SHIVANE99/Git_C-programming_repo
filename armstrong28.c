#include<stdio.h>
int main(){


int num,r,count=0,arm=0,c;
printf("enter the number you want");
scanf("%d",&num);
c=num;
while(num>0){
    r=num%10;
    arm=(r*r*r)+arm;
    num=num/10;
    count=count+1;
}
if(c==arm){
    printf("its armstrtong number");
}
else {
    printf("not armstrong");
}
}