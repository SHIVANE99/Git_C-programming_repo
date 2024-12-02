#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the length of array :");
    scanf("%d", &n);
    ptr = (int *)(malloc(n * sizeof(int)));
    if (ptr == NULL)
    {
        printf("memory allocation failed");
    }
    else
    {
        // entering elements
        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        // displaying elements
        for (int i = 0; i < n; i++)
        {
            printf("the element %d is : %d\n", i, ptr[i]);
        }
    }

    return 0;
}