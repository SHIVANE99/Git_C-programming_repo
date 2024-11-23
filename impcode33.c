#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    int num;
    char (*stu)[100]; // Pointer to arrays of 100 chars
    
    printf("Enter the number of students: ");
    scanf("%d", &num);

    // Dynamically allocate memory for 'num' strings
    stu = (char (*)[100])malloc(num * 100 * sizeof(char));
    if (stu == NULL) { // Check if memory allocation failed
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < num; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", stu[i]);
    }

    // Printing student data
    printf("\nList of Students:\n");
    for (int i = 0; i < num; i++) {
        printf("Student %d is: %s\n", i + 1, stu[i]);
    }

    // Free allocated memory
    free(stu);
    return 0;
}

