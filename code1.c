// c program to find quotient and remainder
#include <stdio.h>
int main()
{
int quotient,dividend,divisor,remainderr;
printf("enter dividend and divisor");
scanf("%d%d",&dividend,&divisor);
quotient=dividend/divisor;
remainderr=dividend%divisor;
printf("the quotient is:%d\n",quotient);
printf("the remainder is : %d",remainderr);

}
