#include<stdio.h>
void printnamaste();
void printbonjour();
int main(){
    char ch;
    printf("are you indian or french (i/f)?");
    scanf("%c",&ch);
    if(ch =='i'){
        printnamaste();
    }
    else{
        printbonjour();
    }

}

void printnamaste(){
    printf("namaste");
}
void printbonjour(){
    printf("bonjour");
}