// C program to count the number of 
// vowels and consonants in a string 
#include<stdio.h>
int cons_vowel(char str[50]){
    int vowel=0;
    int consonants=0;
    char ch;
    for(int i=0;str[i]!='\0';i++){
        ch=str[i];
        if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U'){
            vowel++;
        }
        else if(ch==' '){
            continue;
        }
        else{
            consonants++;
        }
    }
    printf("vowels : %d\n",vowel );
    printf("consonants : %d",consonants);
}
int main(){
    char str[50];
    printf("enter string :");
    scanf("%[^\n]s",str);
    cons_vowel(str);
    
}