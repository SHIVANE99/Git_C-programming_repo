#include <stdio.h>
// C Program to print the string using a function
void printstr(char arr[]){
    int i=0;
    while (arr[i] !='\0'){
        printf("%c",arr[i]);
        i++;

    }
}
int main()
{
    char arr[]={"string"};
    printstr(arr);
    

    return 0;
}