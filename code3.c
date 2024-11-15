//swapping 2 numbers
#include <stdio.h>
int main()
{
    double num1,num2,blank;
    printf("enter 1st and 2nd number:");
    scanf("%d%d",&num1,&num2);
    blank=num1;
    num1=num2;
    num2=blank;
    printf("after swapping 1st num:%d\n",num1);
    printf("second number:%d",num2);
}