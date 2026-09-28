#include<stdio.h>

int main(){
    int ch ;

    while(ch != EOF){
        printf("%c\n",ch);
        ch = getchar();
    }

    return 101 ;
}
