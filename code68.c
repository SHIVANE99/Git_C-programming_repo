// gcd and lcm by  eucledian
#include <stdio.h>
int main()
{
    int a, b, rem, numerator, denominator, gcd;
    printf("enter 2 numbers :");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        numerator = a;
        denominator = b;
    }
    else
    {
        numerator = b;
        denominator = a;
    }
    rem = numerator % denominator;
    while (rem != 0)
    {
        numerator = denominator;
        denominator = rem;
        rem = numerator % denominator;
    }
    gcd = denominator;
    printf("gcd of %d & %d is : %d\n", a, b, gcd);
    printf("lcm of %d & %d is : %d", a, b, (a * b) / gcd);
}