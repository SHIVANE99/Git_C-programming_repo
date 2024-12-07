#include<stdio.h>
int main(){
    int rows;
    printf("enter number of rows you want :");
    scanf("%d",&rows);
    for(int i=0; i < rows;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");


    }






    return 0;
}