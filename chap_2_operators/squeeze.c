#include<stdio.h>

void squeeze(char s1[] , char s2[]);

int main(){
    char s1[5] = "abcde" ;
    char s2[5] = "hello" ;
    squeeze(s1,s2);
    return 0 ;
}

void squeeze(char s1[5], char s2[5]){
    for(int i =0 ; i < 5 && s2[i] != '\0' ; i++){
        char temp = s2[i] ;
        for(int j = 0 ; j < 5 && s2[j] != '\0' ; j++){
            if(s1[j] == temp ){
                s1[j] = ' ' ;
            }
        }
    }

    for(int i = 0 ; i < 5 && s1[i] != '\0'; i++){
        printf("%c", s1[i]);
    }

}