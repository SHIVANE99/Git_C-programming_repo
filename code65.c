#include <stdio.h>
int main()
{
    // printing fabonacii seriesss
    int n;
    int a = 0;
    int b = 1;
    int c;
    printf("enter number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}