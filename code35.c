//C Program to Check Whether a Character is a Vowel or Consonant
#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    int lower,upper;
    printf("enter an alphabet :");
    scanf("%c",&c);
    lower= (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper= (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(! isalpha(c)){
        printf("not an alphabet please enter an alphabet---->");

    }

    else if (lower || upper){
        printf("%c --- is a vowel",c);
    }
    else{
        printf("%c --- is a consonant",c);
    }

}