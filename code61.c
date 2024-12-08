#include <stdio.h>
int DETERMINE(int x, int y, int z, int a);
int main()
{
    // if cost is 5 rs per unit
    int n = 5;
    int one;
    int two;
    int money;
    printf("enter 1st point in meter :");
    scanf("%d", &one);
    printf("enter 2nd point in meter :");
    scanf("%d", &two);
    printf("enter money: ");
    scanf("%d", &money);
    DETERMINE(one, two, money, n);

    return 0;
}
int DETERMINE(int x, int y, int z, int a)
{
    int i;
    i = y - x;
    int b = a * i;
    if (z >= b)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}