#include<stdio.h>

void str_cat(char *s ,char *t){
    while(*s != '\0'){
        s++ ;
    }

    while(*t != '\0'){
        *s++ = *t++ ; 
    }

    *s = '\0';
}

int strend(char *s , char *t){
    // this fn check whether string t occurs at end of s
    char *s_end = s;
    char *t_end = t;

    if(t_end - t > s_end - s)
        return 0 ;

    while (*s_end != '\0') s_end++;
    while (*t_end != '\0') t_end++;

    while (t_end != t) {
        if(*--s_end != *--t_end){
            return 0 ;
        }
    }

    return 1;
}

int main(){
    char s[20] = "beehive";
    char t[10]  = "Live";
    
    // str_cat(s,t);

    int check_end = strend(s,t);
    check_end == 0 ? printf("not at end\n") : printf("present at end\n");

    printf("%s\n", s);
    printf("%s\n",t);

    return 0 ;

}