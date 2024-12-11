// finding gcd
#include <stdio.h>
#include <math.h>
int fgcd(int a, int b);
int main()
{
    int x, y;
    printf("enter 2 numbers :");
    scanf("%d%d", &x, &y);
    int ab=fgcd(x, y);
    printf("the gcd of %d and %d is : %d ", x, y,ab);

    return 0;
}
int fgcd(int a, int b)
{
    int result;
    result = ((a < b) ? a : b);
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}