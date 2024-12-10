// armstrong number
#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    int rem;
    int mul = 1;
    int value = 0;

    printf("enter number");
    scanf("%d", &n);
    int q=n;
    while (q != 0)
    {
        q = q / 10;
        count++;
    }
    q = n;
    while (q != 0)
    {
        rem = q % 10;
        mul = 1;
        for (int i = 0; i < count; i++)
        {
            mul = mul * rem;
        }
        value = value + mul;
        q = q / 10;
        mul = 1;
    }
    if (value == n)
    {
        printf("armsstrong number");
    }
    else
    {
        printf("not an armsstrong number");
    }
}