#include <stdio.h>

int main()
{
    char str[50] = {0};
    printf("enter string:");
    scanf("%4s", str);
    printf("%s", str);
    getchar();
    return 0;
}
