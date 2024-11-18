#include<stdio.h>
int main(){
    int rows;
    printf("enter the number of rows you want :");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j < rows-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<i*2+1;k++){
            printf("*");
        }
        printf("\n");
    }
}
