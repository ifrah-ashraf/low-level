#include<stdio.h>

int strindex(char s[], char t[]);

char pattern[] = "ing" ;

int main(){
    // here we have to write a function that searches for a pattern in the given line
    // and return the index of rightmost occurence if there is more than one present
    char s[100] = "this warming weather is surprising for us." ;
    int i = 0 ;
    while(s[i] != '\0') 
        i++ ;

    int ind = strindex(s,pattern);

    printf("The last pattern ind is %d of total length %d", ind, i) ;

    return 0 ;
}

int strindex(char s[], char t[]){
    // this function willl receive a line and search for pattern inside it
    int i ;
    int j ;
    int k ;
    int ind = -1 ;
    for(i = 0 ; s[i] != '\0' ; i++){
        if(s[i] == t[0]){
            for( j = 0 , k = i ; t[j] == s[k] && t[j] != '\0' ; j++ , k++)
                ;
            if(t[j] == '\0'){
                ind = i ;
            }
            i = k ;
        }
    }

    return ind ;
}